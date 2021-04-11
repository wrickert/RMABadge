# Copyright (c) 2006 Eric P. Mangold
# See LICENSE for details.

import socket, struct

MAX_KEY_LENGTH = 0xff
MAX_VALUE_LENGTH = 0xffff

ASK = '_ask'
ANSWER = '_answer'
COMMAND = '_command'
ERROR = '_error'
ERROR_CODE = '_error_code'
ERROR_DESCRIPTION = '_error_description'
UNKNOWN_ERROR_CODE = 'UNKNOWN'
UNHANDLED_ERROR_CODE = 'UNHANDLED'

class AMPError(Exception):
    """AMP returned an error response"""
    def __init__(self, errorCode, errorDescription):
        Exception.__init__(self, errorDescription)
        self.errorCode = errorCode
        self.errorDescription = errorDescription

class Argument:
    """Base class of AMP arguments"""
    def fromString(self, bytes):
        raise NotImplementedError

    def toString(self, obj):
        raise NotImplementedError

class Integer(Argument):
    fromString = int
    toString = str

class String(Argument):
    def fromString(self, bytes):
        return bytes

    def toString(self, obj):
        return obj

class Float(Argument):
    fromString = float
    toString = repr

class Boolean(Argument):
    def fromString(self, bytes):
        if bytes == 'True':
            return True
        elif bytes == 'False':
            return False
        else:
            raise ValueError("Bad boolean value: %r" % (bytes,))

    def toString(self, obj):
        if obj:
            return 'True'
        else:
            return 'False'

class Unicode(Argument):
    def fromString(self, bytes):
        return bytes.decode('utf-8')

    def toString(self, obj):
        return obj.encode('utf-8')

class Command:
    arguments = []
    response = []
    errors = {}
    #fatalErrors = {} # NOT IMPLEMENTED YET
    requiresAnswer = True

    class __metaclass__(type):
        def __new__(cls, name, bases, attrs):
            if 'commandName' not in attrs:
                attrs['commandName'] = name
            return type.__new__(cls, name, bases, attrs)

    def serializeRequest(cls, dataList, kw):
        """Serialize and append data to the given list"""
        kw = kw.copy()
        for argName, argType in cls.arguments:
            argValue = argType.toString(kw[argName])
            del kw[argName]
            if len(argName) > MAX_KEY_LENGTH:
                raise ValueError, "Key too long"
            if len(argValue) > MAX_VALUE_LENGTH:
                raise ValueError, "Value too long"

            dataList.extend( [argName, argValue] )
            #for kv in argName, argValue:
            #    dataList.append(struct.pack('!H', len(kv)))
            #    dataList.append(kv)
        if kw:
            raise ValueError, "arguments contained unneeded values: %r" % (kw,)
        return dataList
    serializeRequest = classmethod(serializeRequest)

    def deserializeRequest(cls, wireResponse):
        result = {}
        for fieldName, fieldType in cls.arguments:
            result[fieldName] = fieldType.fromString(wireResponse[fieldName])
        return result
    deserializeRequest = classmethod(deserializeRequest)

    def serializeResponse(cls, dataList, kw):
        """Serialize and append data to the given list"""
        for fieldName, fieldType in cls.response:
            fieldValue = fieldType.toString(kw[fieldName])
            if len(fieldName) > MAX_KEY_LENGTH:
                raise ValueError, "Key too long"
            if len(fieldValue) > MAX_VALUE_LENGTH:
                raise ValueError, "Value too long"

            dataList.extend( [fieldName, fieldValue] )
            #for kv in fieldName, fieldValue:
            #    dataList.append(struct.pack('!H', len(kv)))
            #    dataList.append(kv)
        return dataList
    serializeResponse = classmethod(serializeResponse)

    def deserializeResponse(cls, wireResponse):
        response = {}
        for respName, respType in cls.response:
            response[respName] = respType.fromString(wireResponse[respName])
        return response
    deserializeResponse = classmethod(deserializeResponse)

class Proxy:
    counter = 0
    socketTimeout = None 
    ssl = None
    def __init__(self, host, port, useSSL=False, socketTimeout=60.0):
        self.host = host
        self.port = port
        self.useSSL = useSSL
        self.socketTimeout = socketTimeout # set to None to enable fully blocking sockets

    def connect(self):
        sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        sock.settimeout(self.socketTimeout)
        sock.connect( (self.host, self.port) )
        #ssl = socket.ssl(s, '/home/teratorn/code/host.key', '/home/teratorn/code/host.cert')
        if self.useSSL:
            self.ssl = socket.ssl(sock)
            #print 'Connected to SSL server:', self.ssl.server()
        self.sock = sock
        return self

    def callRemote(self, command, **kw):
        """
        Syncronously call a remote AMP command.

        This method may raise socket.error or AMPError during "normal" operations.
        Any other exception should indicate a bug
        """
        return self._callRemote(command, True, **kw)

    def callRemoteNoAnswer(self, command, **kw):
        """
        Syncronously call a remote AMP command. No response is expected, and this
        method will return as soon as the request has been sent.

        This method may raise socket.error or AMPError during "normal" operations.
        Any other exception should indicate a bug
        """
        return self._callRemote(command, False, **kw)

    def _callRemote(self, command, answerExpected, **kw):
        askKey = str(self.counter)
        self.counter += 1

        # compose packet
        dataList = [COMMAND, command.commandName, ASK, askKey]

        command.serializeRequest(dataList, kw)
        insertPrefixes(dataList)

        data = ''.join(dataList)

        # write packet
        self._write(data)

        if not answerExpected:
            return

        # read the response
        wireResponse = {}
        while 1:
            keylen = struct.unpack('!H', self._read(2))[0]
            if keylen == 0:
                break
            key = self._read(keylen)
            valuelen = struct.unpack('!H', self._read(2))[0]
            value = self._read(valuelen)

            wireResponse[key] = value

        #print 'wireResponse:', repr(wireResponse)
        if ERROR in wireResponse:
            assert wireResponse[ERROR] == askKey
            raise AMPError(wireResponse[ERROR_CODE], wireResponse[ERROR_DESCRIPTION])

        assert wireResponse[ANSWER] == askKey
        del wireResponse[ANSWER]

        # return the de-serialized response
        return command.deserializeResponse(wireResponse)

    def _read(self, bufsize):            
        if self.useSSL:
            return self.ssl.read(bufsize)
        else:
            data = self.sock.recv(bufsize)
            while len(data) < bufsize:
                data += self.sock.recv(bufsize-len(data))
            return data

    def _write(self, bytes):
        if self.useSSL:
            self.ssl.write(bytes)
        else:
            self.sock.sendall(bytes)

    def close(self):
        self.sock.close()

def insertPrefixes(dataList):
    for i, value in enumerate(dataList[:]):
        dataList.insert(i*2, struct.pack('!H', len(value)))
    dataList.append('\x00\x00')
    return dataList
