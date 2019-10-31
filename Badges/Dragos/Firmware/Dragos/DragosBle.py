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

def blueGo(name):
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

   u0 = UUID("6e400001-b5a3-f393-e0a9-e50e24dcca9e")
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
