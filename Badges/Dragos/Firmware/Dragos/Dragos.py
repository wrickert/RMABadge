from machine import Pin, I2C, Temp
from ssd1306_mod import SSD1306_I2C_Mod
from time import sleep_ms


up = Pin(Pin.board.P2,Pin.IN,Pin.PULL_UP)
left = Pin(Pin.board.P2,Pin.IN,Pin.PULL_UP)
right = Pin(Pin.board.P28,Pin.IN,Pin.PULL_UP)
down = Pin(Pin.board.P44,Pin.IN,Pin.PULL_UP)
center = Pin(Pin.board.P30,Pin.IN,Pin.PULL_UP)
a = Pin(Pin.board.P47,Pin.IN,Pin.PULL_UP)
b = Pin(Pin.board.P45,Pin.IN,Pin.PULL_UP)

green = Pin(Pin.board.P13,Pin.OUT)
blue = Pin(Pin.board.P15,Pin.OUT)
red = Pin(Pin.board.P17,Pin.OUT)

eye = Pin(Pin.board.P26,Pin.OUT)
attn = Pin(Pin.board.P19,Pin.OUT)


class dragos(object):
   def __init__(self, name, company, title):
      self.name = name
      self.company = company
      self.title = title
      self.i2c = I2C(0,Pin.board.P38,Pin.board.P37)
      self.disp = SSD1306_I2C_Mod(128, 64, self.i2c)
      self.colorNum = 0
      
   def colorSel(self,move):
      red.value(1)
      blue.value(1)
      green.value(1)
      
      self.colorNum += move
      if self.colorNum < 0:
         self.colorNum = 3
      if self.colorNum > 3:
         self.colorNum = 0

      if self.colorNum == 0:
         red.value(1)
         blue.value(1)
         green.value(1)
      if self.colorNum == 1:
         red.value(0)
         blue.value(1)
         green.value(1)
      if self.colorNum == 2:
         red.value(1)
         blue.value(0)
         green.value(1)
      if self.colorNum == 3:
         red.value(1)
         blue.value(1)
         green.value(0)
         
      
      
   def nametag(self):
      two = 10
      three = 20

      if len(self.name) < 16:
         self.disp.text(self.name,0,0)
      else:
         self.disp.text(self.name.split()[0],0,0)
         self.disp.text(self.name.split()[1],10,10)
         two += 10
         three += 10

      if len(self.company) < 16:
         self.disp.text(self.company,0,two)
      else:
         self.disp.text(self.company.split()[0],0,two)
         self.disp.text(self.company.split()[1],10,(two+10))
         three += 10
         if len(self.company.split()) == 3:
            self.disp.text(self.company.split()[2],20,(two+20))
            three += 10
      
      if len(self.title) < 16:
         self.disp.text(self.title,0,three)
      else:
         self.disp.text(self.title.split()[0],0,three)
         self.disp.text(self.title.split()[1],20,(three+10))
      self.disp.show()

   def get_name(self):
      return self.name

   def showTemp(self):
      self.disp.fill(0)
      self.disp.show()
      self.disp.text("The Current Tempature is:",0,0)
      tempC = Temp.read()
      tempF = (((9/7)*tempC)+32)
      self.disp.text(str(tempC),10,20)
      self.disp.show()
      sleep_ms(10000)
      self.disp.fill(0)
      self.disp.show()
      dragos.nametag(self)

   def showString(self,string):
      self.disp.fill(0)
      self.disp.show()
      self.disp.text(string,0,0)
      self.disp.show()
      sleep_ms(10000)
      self.disp.fill(0)
      self.disp.show()
      dragos.nametag(self)

   def showStrings(self,string1,string2):
      self.disp.fill(0)
      self.disp.show()
      self.disp.text(string1,0,0)
      self.disp.text(string2,0,10)
      self.disp.show()
      sleep_ms(10000)
      self.disp.fill(0)
      self.disp.show()
      dragos.nametag(self)

def program(name,company,title):
   print("Welcome, new user")
   newName = open("name.txt","w")
   newName.write(name)
   newName.close()
   newCompany = open("company.txt","w")
   newCompany.write(company)
   newCompany.close()
   newTitle = open("title.txt","w")
   newTitle.write(title)
   newTitle.close()
   print("Your data is written, Please reboot")


def usbMode():
   attn.value(1)
   print("\n\nUSB mode enabled")
   print("Welcome!")
   print("This is the Micropython USB_CDC REPL terminal")
   print("To enter usb mode press both red buttons on right side of badge")
   print("\nAll source code and hardware is availible on github")
   print("https://github.com/wrickert/RMABadge/tree/master/Badges/Dragos")
   print("\nMicropython docs are availible here: https://docs.micropython.org/en/latest/index.html")
   print("Be aware, those docs are for the ESP32 microcontroller and this badge uses the nRF52")
   print("Things may be slightly different")
   print("\n\nRMA Badge support email: willi@m-rickert.com\n\n\n")

def colorwheel():
   for i in range(5):
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

def temp():
   t = Temp.read()
   return ((t*(9/5))+32)

def ledtest():
   attn.value(1)
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

   attn.value(0)
   red.value(1)
   blue.value(1)
   green.value(1)
