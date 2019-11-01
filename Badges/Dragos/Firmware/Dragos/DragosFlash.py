import QL800
import xlrd
import os
import sys
from time import sleep

loc=('~/Downloads/Dragos Employee List-DISC 2019.xlsx')
wb = xlrd.open_workbook(loc)
sheet = wb.sheet_by_index(0)

#buildDir = '~/Documents/Projects/RMABadge/Badges/Dragos/Firmware/Dragos/build/'
frozenDir = '~/Documents/Projects/RMABadge/Badges/Dragos/Firmware/Dragos/frozen'
makeDir = '~/Documents/Projects/RMABadge/Badges/Dragos/Firmware/micropython/ports/nrf/'


# Program
def nameProg(startPos):
   print("\nStarting at " + str(startPos))
   for i in range(startPos,sheet.nrows):
      print("Programming " + str(i) + " of " + str(sheet.nrows))
      # We want row 1 column 2 for name
      name = sheet.cell_value(i,2)
      title = sheet.cell_value(i,3)
      company = sheet.cell_value(i,4)
      
      print("\n\nflashing badge for " + name)
      print("running command: make -C " + makeDir + " BOARD=pca10056 FROZEN_MPY_DIR=../../../Dragos/frozen SD=s140 flash\n")
#      os.system("make -C " + makeDir + " BOARD=pca10056 FROZEN_MPY_DIR=../../../Dragos/frozen SD=s140 sd")

      # Allow time to pass for usb to connect
      print("Sleeping to wait for usb connection")
      print("5", end = " ")
      sleep(1)
      print("4", end = " ")
      sleep(1)
      print("3", end = " ")
      sleep(1)
      print("2", end = " ")
      sleep(1)
      print("1", end = " ")
      sleep(1)

      #namePath = os.path.join(buildDir,"name.txt")
      nameFile = open("name.txt","w")
      nameFile.write(name)
      nameFile.close()
      sleep(3)

      #titlePath = os.path.join(buildDir,"title.txt")
      titleFile = open("title.txt","w")
      titleFile.write(title)
      titleFile.close()
      sleep(3)

      #companyPath = os.path.join(buildDir,"company.txt")
      companyFile = open("company.txt","w")
      companyFile.write(company)
      companyFile.close()
      sleep(3)

      print("\nampy -p /dev/ttyACM0 put name.txt")
      os.system("ampy -p /dev/ttyACM0 put name.txt")
       
      print("\nampy -p /dev/ttyACM0 put title.txt")
      os.system("ampy -p /dev/ttyACM0 put title.txt")

      print("\nampy -p /dev/ttyACM0 put company.txt")
      os.system("ampy -p /dev/ttyACM0 put company.txt")

      QL800.printLabel(name)

      var = input("\nWhats next? q for Quit, n for next: ")
      if var == "q":
         print("For next time, you were at " + str(i))
         sys.exit()

if __name__ == "__main__":
   nameProg(int(sys.argv[1]))
