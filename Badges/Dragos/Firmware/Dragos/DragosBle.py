'''
from ubluepy import Service, Characteristic, UUID, Peripheral, constants

uuid_env_sense = UUID("0x181A") # Environmental Sensing service
uuid_temp = UUID("0x2A6E") # Temperature characteristic

serv_env_sense = Service(uuid_env_sense)

temp_props = Characteristic.PROP_NOTIFY | Characteristic.PROP_READ
temp_attrs = Characteristic.ATTR_CCCD
char_temp = Characteristic(uuid_temp, props = temp_props, attrs = temp_attrs)

serv_env_sense.addCharacteristic(char_temp)

periph = Peripheral()
periph.addService(serv_env_sense)
periph.setConnectionHandler(event_handler)
periph.advertise(device_name=Dragos.dragos.get_name(badge), services=[serv_env_sense])
'''

import Dragos
from ubluepy import Peripheral
from ubluepy import Service, Characteristic, UUID, Peripheral, constants
import ubluepy_scan

def findLocal(badge):
   Dragos.dragos.showString(badge,"Scanning area")
   print("Scanning")
   scan = ubluepy_scan.find_device_by_name("Dragos")
   if scan == None:
      Dragos.dragos.showString(badge,"Trying Again")
      print("Retrying")
      scan = ubluepy_scan.find_device_by_name("Dragos")
   if scan == None:
      Dragos.dragos.showString(badge,"Noone found")
      print("No badges found")
      return
   
   print("Found!")
   name = decodeName(scan)
   print(name)
   Dragos.dragos.showStrings(badge,"Found:",name)

   
      
   

def decodeName(scan):
   # eman because its the name in backwards order
   eman = ""
   for i in range(14):
      letter = chr(scan.getScanData()[2][2][i])#+chr(scan.getScanData()[2][2][(i+1)])
      if letter != 0:
         eman += letter
      i += 1
      #print("i: " + str(i) + " letter: " + letter + " name: " + name)

   name = ""
   for i in range((len(eman)-1),0,-1):
      if ord(eman[i]) > 64 and ord(eman[i]) < 123:
         name += eman[i]
   return name

def encodeName(badge):
   lname = Dragos.dragos.get_name(badge).split()[1]
   print("Starting bluetooth LE for " + lname)
   count = 0
   u0 = "6e400001-"
   u1 = ""
   dash = 2
   for i in range(16):
      if i == dash:
         if i < len(lname):
            dash += 2
         else:
            dash += 4
         count += 1
         if count < 4:
            u0 += '-'
      if i < len(lname):
         u0 += str(hex(ord(lname[i]))[2])
         u0 += str(hex(ord(lname[i]))[3])
         i += 1
      else:
         u0 += str(00)

   # bad fix because its late
   if len(u0) > 36:
      for i in range(32):
         u1 += u0[i]
      print("Endoded UUID: u1 " + u1)
      print("UUID Length: " +str(len(u1)))
      return u1
   elif len(u0) < 36:
      for i in range(36-len(u0)):
         u0 += '0'
      print("Padding " + str(36-len(u0)))
      return u0
   else:
      print("just right")
      print("Endoded UUID: " + u1)
      print("UUID Length: " +str(len(u1)))
      return u0

def blueGo(u0):
#   p = Peripheral()
#   p.advertise(device_name=name)


   def event_handler(id, handle, data):
      print("BLE event:", id, "handle:", handle)
      print(data)
      if id == constants.EVT_GAP_CONNECTED:
         Dragos.colorwheel()
      elif id == constants.EVT_GAP_DISCONNECTED:
         print("Disconnect")
         # disconnect
         #LED(2).off()

   #u0 = UUID("6e400001-b5a3-f393-e0a9-e50e24dcca9e")
   #u0 = UUID(encodeName(badge))
   u1 = UUID("6e400002-b5a3-f393-e0a9-e50e24dcca9e")
   u2 = UUID("6e400003-b5a3-f393-e0a9-e50e24dcca9e")
   s = Service(u0)
   c0 = Characteristic(u1, props = Characteristic.PROP_WRITE | Characteristic.PROP_WRITE_WO_RESP)
   c1 = Characteristic(u2, props = Characteristic.PROP_NOTIFY, attrs = Characteristic.ATTR_CCCD)
   s.addCharacteristic(c0)
   s.addCharacteristic(c1)
   p = Peripheral()
   p.addService(s)
   p.setConnectionHandler(event_handler)
   p.advertise(device_name="Dragos", services=[s])
