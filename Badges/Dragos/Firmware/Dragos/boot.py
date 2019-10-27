import Dragos
import os

#Init, self test code
Dragos.eye.value(1)
Dragos.ledtest()

name = open('name','r')
title = open('title','r')
company = open('company','r')

badge = Dragos.dragos(name.read(), title.read(), company.read())
