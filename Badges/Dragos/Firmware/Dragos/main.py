import Dragos

#Init, self test code
Dragos.eye.value(1)
Dragos.ledtest()

name = open('name.txt','r')
title = open('title.txt','r')
company = open('company.txt','r')

badge = Dragos.dragos(name.read(), title.read(), company.read())

Dragos.dragos.nametag(badge)

# Main UI Loop
while True:
   if Dragos.a.value == 0:
      Dragos.dragos.showTemp(badge)      
