import Dragos
import os

Dragos.eye.value(1)
Dragos.dragos.colorwheelonce()

name = open('name','r')
title = open('title','r')
company = open('company','r')

badge = Dragos.dragos(name.read(), title.read(), company.read())
