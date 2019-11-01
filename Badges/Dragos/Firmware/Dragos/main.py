import Dragos
import DragosBle
from ubluepy import UUID
import micropython
from time import sleep_ms
import name, company, title

#Init, self test code
Dragos.eye.value(1)
Dragos.ledtest()

micropython.alloc_emergency_exception_buf(100)

"""
name = open('name.py','r')
title = open('title.py','r')
company = open('company.py','r')
"""

badge = Dragos.dragos(name.get(), title.get(), company.get())
#badge = Dragos.dragos(name.read(), title.read(), company.read())

Dragos.dragos.nametag(badge)

#Start BLE service
DragosBle.blueGo(UUID(DragosBle.encodeName(badge)))

once = True
# Main UI Loop
while True:
   if Dragos.a.value() == 0:
      sleep_ms(400)
      if Dragos.a.value() == 0 and Dragos.b.value() == 0:
         Dragos.usbMode()
         Dragos.dragos.showString(badge,"USB mode enabled")
         break
      Dragos.dragos.showTemp(badge)      
   if Dragos.b.value() == 0:
      sleep_ms(400)
      if Dragos.a.value() == 0 and Dragos.b.value() == 0:
         Dragos.usbMode()
         Dragos.dragos.showString(badge,"USB mode enabled")
         break
      print("ColorWheel!")
      Dragos.colorwheel()
      print("Okay, dizzy now.")
   if Dragos.left.value() == 0:
      Dragos.dragos.colorSel(badge,-1)
      sleep_ms(400)
   if Dragos.right.value() == 0:
      sleep_ms(400)
      Dragos.dragos.colorSel(badge,1)
   if Dragos.center.value() == 0:
      DragosBle.findLocal(badge)
     
   sleep_ms(100)
         
