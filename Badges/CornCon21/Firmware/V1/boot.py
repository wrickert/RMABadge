import stranger
from machine import deepsleep
import time

print("Welcome to Corncon!")
print("Press Ctrl-C to enter the python REPL")



index = 0
sleep = 0

#stranger.chirp()
#stranger.testSegments()


while True:
   if index == 0:
      stranger.rainbowFade()
   if index == 1:
      stranger.randomColor()
   if index == 2:
      stranger.red()
   if index == 3:
      stranger.green()
   if index == 4:
      stranger.blue()

   stranger.displayString("Corn")
   stranger.displayString("Con ")

   if index > 4:
      index == 0
   else:
      index += 1

   sleep += 1

   if sleep == 100:
      stranger.lightsout()
      deepsleep(20000)
