from machine import Pin, I2C
from ssd1306_mod import SSD1306_I2C_Mod
from time import sleep_ms

i2c = I2C(0,Pin.board.P38,Pin.board.P37)
disp = SSD1306_I2C_Mod(128, 64, i2c)

up = Pin(Pin.board.P2,Pin.IN,Pin.PULL_UP)
left = Pin(Pin.board.P2,Pin.IN,Pin.PULL_UP)
right = Pin(Pin.board.P28,Pin.IN,Pin.PULL_UP)
down = Pin(Pin.board.P44,Pin.IN,Pin.PULL_UP)
a = Pin(Pin.board.P2,Pin.IN,Pin.PULL_UP)
b = Pin(Pin.board.P45,Pin.IN,Pin.PULL_UP)

green = Pin(Pin.board.P13,Pin.OUT)
blue = Pin(Pin.board.P15,Pin.OUT)
red = Pin(Pin.board.P17,Pin.OUT)

eye = Pin(Pin.board.P26,Pin.OUT)

class dragos(object):
   def __init__(self, name, company, title):
      self.name = name
      self.company = company
      self.title = title
      
      if len(name) < 16:
         disp.text(name,0,0)
         disp.text(title,0,10)
         disp.text(company,0,20)
         disp.show()

      else:
         disp.text(name.split()[0],0,0)
         disp.text(name.split()[1],20,10)
         disp.text(title,0,20)
         disp.text(company,0,30)
         disp.show()

   def get_name(self):
      return self.name

def colorwheel():
   for i in range(10):
      for i in range(3):
         if i == 0:
            red.value(0)
            blue.value(1)
            green.value(1)
            sleep_ms(1000)               
         if i == 1:
            red.value(1)
            blue.value(0)
            green.value(1)
            sleep_ms(1000)               
         if i == 2:
            red.value(1)
            blue.value(1)
            green.value(0)
            sleep_ms(1000)               
   red.value(1)
   blue.value(1)
   green.value(1)

def ledtest():
   for i in range(3):
      if i == 0:
         red.value(0)
         blue.value(1)
         green.value(1)
         sleep_ms(1000)               
      if i == 1:
         red.value(1)
         blue.value(0)
         green.value(1)
         sleep_ms(1000)               
      if i == 2:
         red.value(1)
         blue.value(1)
         green.value(0)
         sleep_ms(1000)               
   red.value(1)
   blue.value(1)
   green.value(1)
