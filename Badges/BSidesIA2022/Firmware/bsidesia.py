from machine import Pin,PWM, reset
from neopixel import NeoPixel
import random
import time

np = NeoPixel(Pin(1, Pin.OUT),8)
piezo = Pin(21)

tLeft = Pin(0, Pin.IN)
tRight = Pin(8, Pin.IN, Pin.PULL_UP)
bLeft = Pin(9, Pin.IN, Pin.PULL_UP)
bRight = Pin(10, Pin.IN , Pin.PULL_UP)
extra = Pin(7, Pin.IN, Pin.PULL_UP)

pattern = []
dead = 0 

def checkSimonStart():
   if tRight.value() == 0:
      return True

def checkMusicStart():
   if bRight.value() == 0:
      return True

def checkChangeColor():
   if bLeft.value() == 0:
      return True

def ocarina():
   print("Playing the Ocarina")
   lightsout()
   page = 1
   white()
   while True:
      if page == 1:
         np[2] = (255,0,0)
         np.write()
         if tLeft.value() == 0:
            page = 2
            time.sleep_ms(200)
         if tRight.value() == 0:
            beep(getFrequency("C4"),500)
         if bLeft.value() == 0:
            beep(getFrequency("D4"),500)
         if bRight.value() == 0:
            beep(getFrequency("E4"),500)
      if page == 2:
         np[2] = (0,255,0)
         np.write()
         if tLeft.value() == 0:
            page = 1
            time.sleep_ms(500)
         if tRight.value() == 0:
            beep(getFrequency("F4"),500)
         if bLeft.value() == 0:
            beep(getFrequency("G4"),500)
         if bRight.value() == 0:
            beep(getFrequency("A4"),500)
            
            

def simon():
   correct = False
   for t in range(15):
      simonTeach(pattern) 
      for i in range(len(pattern)):
         #print("looking for: " + str(pattern[i]))
         for j in range(100000): 
            if tRight.value() == 0:
               print("I see top right")
               if pattern[i] == 1:
                  print("Correct button press!")
                  upperRight()
                  correct = True
                  #time.sleep_ms(1000)
               else:
                  print("incorrect button press")
                  ded()
               break
            if tLeft.value() == 0:
               print("I see top left")
               if pattern[i] == 2:
                  print("Correct button press!")
                  upperLeft()
                  correct = True
                  #time.sleep_ms(1000)
               else:
                  print("incorrect button press")
                  ded()
               break
            if bLeft.value() == 0:
               print("I see bottom left")
               if pattern[i] == 3:
                  print("Correct button press!")
                  lowerLeft()
                  correct = True
                  #time.sleep_ms(1000)
               else:
                  print("incorrect button press")
                  ded()
               break
            if bRight.value() == 0:
               print("I see bottom right")
               if pattern[i] == 4:
                  print("Correct button press!")
                  lowerRight()
                  correct = True
                  #time.sleep_ms(1000)
               else:
                  print("incorrect button press")
                  red()
                  ded()
               break
            time.sleep_ms(10)
      time.sleep_ms(1000)
   
def simonTeach(pattern):
   pattern.append(random.randint(1,4))
   for i in range(len(pattern)):
      if pattern[i] == 1:
         upperRight()
      if pattern[i] == 2:
         upperLeft()
      if pattern[i] == 3:
         lowerLeft()
      if pattern[i] == 4:
         lowerRight()
      time.sleep_ms(500-(len(pattern)))
   return pattern

def simonTell(pattern):
   print("nothing here yet")

def ded():
   print("You have been eaten by a grue")
   bigbeep()
   reset()

def upperRight():
   lightsout()
   np[0] = (255,0,0)
   np[1] = (255,0,0)
   np.write()
   beep(getFrequency("C4"),500)

def upperLeft():
   lightsout()
   np[2] = (0,255,0)
   #np[1] = (255,0,0)
   np.write()
   beep(getFrequency("D4"),500)

def lowerLeft():
   lightsout()
   np[4] = (0,0,255)
   np[5] = (0,0,255)
   np.write()
   beep(getFrequency("E4"),500)

def lowerRight():
   lightsout()
   np[6] = (255,255,0)
   np[7] = (255,255,0)
   np.write()
   beep(getFrequency("F4"),500)

def firstBoot():
   upperRight()
   upperLeft()
   lowerLeft()
   lowerRight()

def staticRainbow():
   np[0] = (255,0,0)
   np[1] = (0,255,0)
   np[2] = (0,0,255)
   np[3] = (255,0,0)
   np[4] = (0,255,0)
   np[5] = (0,0,255)
   np[6] = (255,0,0)
   np[7] = (0,255,0)
   np.write()

def randomRainbow():
   lightsout()
   for i in range(8):
      rand = random.randint(1,4)
      if rand == 1:
         np[i] = (255,0,0)
      if rand == 2:
         np[i] = (0,255,0)
      if rand == 3:
         np[i] = (0,0,255)
      if rand == 4:
         np[i] = (205,200,0)
      np.write()

count = 1

def spiral(count):
   if count == 1:
      np[0] = (255,0,0)
      np[1] = (255,0,0)
      np[2] = (0,255,0)
      np[3] = (0,255,0)
      np[4] = (0,0,255)
      np[5] = (0,0,255)
      np[6] = (200,200,0)
      np[7] = (200,200,0)
      np.write()
      count += 1
      return count
   if count == 2:
      np[6] = (255,0,0)
      np[7] = (255,0,0)
      np[0] = (0,255,0)
      np[1] = (0,255,0)
      np[2] = (0,0,255)
      np[3] = (0,0,255)
      np[4] = (200,200,0)
      np[5] = (200,200,0)
      np.write()
      count += 1
      return count
   if count == 3:
      np[4] = (255,0,0)
      np[5] = (255,0,0)
      np[6] = (0,255,0)
      np[7] = (0,255,0)
      np[0] = (0,0,255)
      np[1] = (0,0,255)
      np[2] = (200,200,0)
      np[3] = (200,200,0)
      np.write()
      count += 1
      return count
   if count == 4:
      np[2] = (255,0,0)
      np[3] = (255,0,0)
      np[4] = (0,255,0)
      np[5] = (0,255,0)
      np[6] = (0,0,255)
      np[7] = (0,0,255)
      np[0] = (200,200,0)
      np[1] = (200,200,0)
      np.write()
      count = 1
      return count
   time.sleep_ms(1000)
      
   
def green():
   lightsout()
   for i in range(8):
      np[i] = (0,255,0)
      np.write()

def blue():
   lightsout()
   for i in range(8):
      np[i] = (0,0,255)
      np.write()

def yellow():
   lightsout()
   for i in range(8):
      np[i] = (200,200,0)
      np.write()

def red():
   lightsout()
   for i in range(8):
      np[i] = (255,0,0)
      np.write()

def white():
   for i in range(8):
      np[i] = (200,200,200)
   np.write()

def lightsout():
   for i in range(8):
      np[i] = (0,0,0)
   np.write()

#Note format is Letter + Octave, i.e. C4 'middle C'
def getFrequency(note, A4=440):
    notes = ['A', 'A#', 'B', 'C', 'C#', 'D', 'D#', 'E', 'F', 'F#', 'G', 'G#']

    octave = int(note[2]) if len(note) == 3 else int(note[1])
        
    keyNumber = notes.index(note[0:-1]);
    
    if (keyNumber < 3) :
        keyNumber = keyNumber + 12 + ((octave - 1) * 12) + 1; 
    else:
        keyNumber = keyNumber + ((octave - 1) * 12) + 1; 

    return int(A4 * 2** ((keyNumber- 49) / 12))


#extra.irq(lambda t: annoyance())

def annoyance():
   bigbeep()

def bigbeep():
   for i in range(2):
      for j in range(500,1500,80):
         beep(j,100)
      for k in range(1500,500,-80):
         beep(k,100)

def beep(freq, btime):
   p = PWM(piezo)
   p.freq(freq)
   time.sleep_ms(btime)
   p.deinit()


