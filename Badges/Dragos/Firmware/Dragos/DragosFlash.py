import QL800
import xlrd
import os
import sys
from time import sleep

#loc=('/home/william/Downloads/Dragos Customer List-DISC 2019.xlsx')
loc=('/home/william/Downloads/Dragos Employee List-DISC 2019.xlsx')
wb = xlrd.open_workbook(loc)
sheet = wb.sheet_by_index(0)

#buildDir = '~/Documents/Projects/RMABadge/Badges/Dragos/Firmware/Dragos/build/'
frozenDir = '/home/william/Documents/Projects/RMABadge/Badges/Dragos/Firmware/Dragos/frozen'
makeDir = '/home/william/Documents/Projects/RMABadge/Badges/Dragos/Firmware/new/micropython/ports/nrf/'

lineOne = "def get():"

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

      #namePath = os.path.join(buildDir,"name.txt")
      nameFile = open("name.py","w")
      nameFile.write(lineOne)
      nameFile.write("\n   return \"" +name + "\"")
      nameFile.close()
      sleep(3)

      #titlePath = os.path.join(buildDir,"title.txt")
      titleFile = open("title.py","w")
      titleFile.write(lineOne)
      titleFile.write("\n   return \"" +title+ "\"")
      titleFile.close()
      sleep(3)

      #companyPath = os.path.join(buildDir,"company.txt")
      companyFile = open("company.py","w")
      companyFile.write(lineOne)
      companyFile.write("\n   return \"" +company+ "\"")
      companyFile.close()
      sleep(3)
         
#      print("\n\nflashing badge for " + name)
#      print("running command: make -C " + makeDir + " BOARD=pca10056 FROZEN_MPY_DIR=../../../Dragos/frozen SD=s140 flash\n")
#      os.system("make -C " + makeDir + " BOARD=pca10056 FROZEN_MPY_DIR=../../../../Dragos/frozen SD=s140 sd")

#      QL800.printLabel(name)

      var = input("\nWhats next? q for Quit, n for next: ")
      if var == "q":
         print("For next time, you were at " + str(i))
         sys.exit()

if __name__ == "__main__":
   nameProg(int(sys.argv[1]))
