from machine import Pin, PWM
from neopixel import NeoPixel
import time

np = NeoPixel(Pin(1, Pin.OUT), 7)
piezo = Pin(37)
button = Pin(0, Pin.IN, Pin.PULL_UP)

A = Pin(21, Pin.OUT)
B = Pin(10, Pin.OUT)
C = Pin(8, Pin.OUT)
D = Pin(7, Pin.OUT)
Es = Pin(6, Pin.OUT)
F = Pin(13, Pin.OUT)
G = Pin(5, Pin.OUT)
H = Pin(12, Pin.OUT)
J = Pin(11, Pin.OUT)
K = Pin(9, Pin.OUT)
L = Pin(16, Pin.OUT)
M = Pin(15, Pin.OUT)
N = Pin(14, Pin.OUT)
P = Pin(18, Pin.OUT)
DP = Pin(17, Pin.OUT)

# OPEN DRAIN is a special mode that makes the whole thing work.
# if the output value is set to 0 the pin is active at a low level
# if the output value is 1 the pin is in a high-impedance state.
G1 = Pin(40, Pin.OPEN_DRAIN)
G2 = Pin(39, Pin.OPEN_DRAIN)
G3 = Pin(42, Pin.OPEN_DRAIN)
G4 = Pin(41, Pin.OPEN_DRAIN)

#Take a string and display it
@micropython.native
def displayString(display):
   clear14()
   G1.on()
   G2.on()
   G3.on()
   G4.on()
   
   index = 0

   #Outer loop for entire string
   for j in range(0,4):
      clear14()
      setSeg(letterToBinary(display[index]))
      if(j==0):
         G1.off()
         G2.on()
         G3.on()
         G4.on()
      if(j==1):
         G1.on()
         G2.off()
         G3.on()
         G4.on()
      if(j==2):
         G1.on()
         G2.on()
         G3.off()
         G4.on()
      if(j==3):
         G1.on()
         G2.on()
         G3.on()
         G4.off()
      time.sleep_ms(500)
      if button.value() == 0:
         attention()
      if index == (len(display)-1):
         index = 0
      else:
         index += 1

def attention():
   np[6] = (50,0,0)
   np.write()
   chirp()
   np[6] = (0,0,0)
   np.write()
   time.sleep_ms(300)
   np[6] = (50,0,0)
   np.write()
   chirp()
   np[6] = (0,0,0)
   np.write()




def testLetter(display):
   clear14()
   setSeg(letterToBinary(display[0]))
   G1.off()
   G2.on()
   G3.on()
   G4.on()
   

@micropython.native
def letterToBinary(letter):
   if(letter[0] == "A" or letter[0] == "a"):
      return 0b1111011000100010
   if(letter[0] == "B" or letter[0] == "b"):
      return 0b1001111000100010
   if(letter[0] == "C" or letter[0] == "c"):
      return 0b1100111000000000
   if(letter[0] == "D" or letter[0] == "d"):
      return 0b1011110000100010
   if(letter[0] == "E" or letter[0] == "e"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1100111000100010
   if(letter[0] == "F" or letter[0] == "f"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1100011000100010
   if(letter[0] == "G" or letter[0] == "g"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1101111000100010
   if(letter[0] == "H" or letter[0] == "h"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1011011000100010
   if(letter[0] == "I" or letter[0] == "i"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1100100010001000
   if(letter[0] == "J" or letter[0] == "j"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1011110000000000
   if(letter[0] == "K" or letter[0] == "k"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1000011001010000
   if(letter[0] == "L" or letter[0] == "l"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1000111000000000
   if(letter[0] == "M" or letter[0] == "m"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1011011101000000
   if(letter[0] == "N" or letter[0] == "n"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1011011100010000
   if(letter[0] == "O" or letter[0] == "o"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1111111000000000
   if(letter[0] == "P" or letter[0] == "p"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1110011000100010
   if(letter[0] == "Q" or letter[0] == "q"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1111001000100010
   if(letter[0] == "R" or letter[0] == "r"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1110011000110010
   if(letter[0] == "S" or letter[0] == "s"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1101101000100010
   if(letter[0] == "T" or letter[0] == "t"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1100000010001000
   if(letter[0] == "U" or letter[0] == "u"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1011111000000000
   if(letter[0] == "V" or letter[0] == "v"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1000011001000100
   if(letter[0] == "W" or letter[0] == "w"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1011111000001000
   if(letter[0] == "X" or letter[0] == "x"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1000000101010100
   if(letter[0] == "Y" or letter[0] == "y"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1000000101001000
   if(letter[0] == "Z" or letter[0] == "z"):
      #      000ABCDEFGHJKLMNPDp
      return 0b1100100001000100
   #space
   if(letter[0] == " " or letter[0] == " "):
      #      000ABCDEFGHJKLMNPDp
      return 0b1000000000000000

#seg is a binary number it goes, ABCDEFGHJKLMNPDp
@micropython.native
def setSeg(seg):
   if(bin(seg)[3] == '1'):
      A.on()
   if(bin(seg)[4] == '1'):
      B.on()
   if(bin(seg)[5] == '1'):
      C.on()
   if(bin(seg)[6] == '1'):
      D.on()
   if(bin(seg)[7] == '1'):
      Es.on()
   if(bin(seg)[8] == '1'):
      F.on()
   if(bin(seg)[9] == '1'):
      G.on()
   if(bin(seg)[10] == '1'):
      H.on()
   if(bin(seg)[11] == '1'):
      J.on()
   if(bin(seg)[12] == '1'):
      K.on()
   if(bin(seg)[13] == '1'):
      L.on()
   if(bin(seg)[14] == '1'):
      M.on()
   if(bin(seg)[15] == '1'):
      N.on()
   if(bin(seg)[16] == '1'):
      P.on()
   if(bin(seg)[17] == '1'):
      Dp.on()

def tune(freq):
   p = PWM(piezo)
   p.freq(freq)
   time.sleep_ms(500)
   p.deinit()
   

def chirp():
   p = PWM(piezo)
   p.freq(2000)
   time.sleep_ms(500)
   p.deinit()


def chirp2():
   p = PWM(piezo)
   p.freq(2000)
   time.sleep_ms(400)
   p.deinit()
   time.sleep_ms(300)
   p = PWM(piezo)
   p.freq(2000)
   time.sleep_ms(400)
   p.deinit()

def red():
   for i in range(6):
      np[i] = (130,0,0)
   np.write()

def green():
   for i in range(6):
      np[i] = (0,130,0)
   np.write()

def blue():
   for i in range(6):
      np[i] = (0,0,130)
   np.write()


def clear14():
  A.off()
  B.off()
  C.off()
  D.off()
  Es.off()
  F.off()
  G.off()
  H.off()
  J.off()
  K.off()
  L.off()
  M.off()
  N.off()
  P.off()
  DP.off()

def set14():
  A.on()
  B.on()
  C.on()
  D.on()
  Es.on()
  F.on()
  G.on()
  H.on()
  J.on()
  K.on()
  L.on()
  M.on()
  N.on()
  P.on()
  DP.on()
 



def testSegments():
   set14()
   G1.on()
   G2.on()
   G3.on()
   G4.on()
   for j in range(1,100):
      for i in range(1,5):
         if i == 1:
            G1.on()
            G2.off()
            G3.off()
            G4.off()
         elif i == 2:
            G1.off()
            G2.on()
            G3.off()
            G4.off()
         elif i == 3:
            G1.off()
            G2.off()
            G3.on()
            G4.off()
         elif i == 4:
            G1.off()
            G2.off()
            G3.off()
            G4.on()
            i = 1

def Z():
   A.on()
   J.on()
   M.on()
   D.on()

def O():
   A.on()
   B.on()
   C.on()
   D.on()
   Es.on()
   F.on()

def E():
   A.on()
   K.on()
   D.on()
   Es.on()
   F.on()

def zoe():
   clear14()
   G1.on()
   G2.on()
   G3.on()
   G4.on()
   while True:
      for i in range(1,5):
         if i == 1:
            time.sleep_ms(5)
            clear14()
            Z()
            G1.off()
            G2.on()
            G3.on()
            G4.on()
         elif i == 2:
            time.sleep_ms(5)
            clear14()
            O()
            G1.on()
            G2.off()
            G3.on()
            G4.on()
         elif i == 3:
            time.sleep_ms(5)
            clear14()
            E()
            G2.on()
            G2.on()
            G3.off()
            G4.on()
   
