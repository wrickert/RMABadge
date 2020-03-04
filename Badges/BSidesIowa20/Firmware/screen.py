from machine import Pin, SPI
import st7789

spi = SPI(2, baudrate=40000000, polarity=1, sck=Pin(18), mosi=Pin(23), miso=Pin(14))
display = st7789.ST7789(spi, 240, 240, reset=Pin(4, Pin.OUT), dc=Pin(2, Pin.OUT), xstart=0, ystart=0)
#display = st7789.ST7789(spi, 320, 240, reset=Pin(4, Pin.OUT), dc=Pin(2, Pin.OUT), xstart=xs, ystart=ys)

def start(xs, ys):
   display.init()
  
