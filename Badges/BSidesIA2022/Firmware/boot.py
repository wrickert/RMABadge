import bsidesia
from machine import deepsleep
import time

print("Welcome to BSidesIA 2022!")
print("Press Ctrl-C to enter the python REPL")
print("The first badge flag is SecDSM{Hope_You_Used_puTTY}")



index = 0
sleep = 0
ret = 1

#stranger.chirp()
#stranger.testSegments()

bsidesia.firstBoot()

while True:
   if index == 0:
      bsidesia.staticRainbow()
   if index == 1:
      ret = bsidesia.spiral(ret)
      
   if index == 2:
      bsidesia.randomRainbow()
   if index == 3:
      bsidesia.red()
   if index == 4:
      bsidesia.green()
   if index == 5:
      bsidesia.blue()
   if index == 6:
      bsidesia.white()
   if index == 7:
      bsidesia.lightsout()

   if index > 7:
      index = 0
   #else:
      #index += 1

   if bsidesia.checkSimonStart() == True:
      bsidesia.simon()
   
   if bsidesia.checkMusicStart() == True:
      bsidesia.ocarina()

   if bsidesia.checkChangeColor() == True:
      index += 1
      time.sleep_ms(250)
      print("Index is :" + str(index))

   sleep += 0

   if sleep == 100:
      bsidesia.lightsout()
      deepsleep(20000)
