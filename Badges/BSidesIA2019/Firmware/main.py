import rainbowPiano
import time
from notes import *
from math import ceil
import machine

machine.freq(80000000)


def play_zelda():
    """
    Play the main theme from Link's awakening.
    :return:
    """
    rainbowPiano.play_note(AS5, .314)
    time.sleep(.091)
    rainbowPiano.play_note(F5, .522)
    rainbowPiano.play_note(AS5)
    rainbowPiano.play_note(AS5)
    rainbowPiano.play_note(C6)
    rainbowPiano.play_note(D6)
    rainbowPiano.play_note(DS6)
    # 1.19
    rainbowPiano.play_note(F6, .506)
    time.sleep(.507)
    rainbowPiano.play_note(F6)
    time.sleep(.1)
    rainbowPiano.play_note(F6)
    time.sleep(.1)
    rainbowPiano.play_note(FS6)
    rainbowPiano.play_note(GS6)
    # 3.07
    rainbowPiano.play_note(AS6, .517)
    # Top of the first swell

    rainbowPiano.play_note(AS6)
    time.sleep(.1)
    rainbowPiano.play_note(AS6)
    time.sleep(.1)
    rainbowPiano.play_note(GS6)
    rainbowPiano.play_note(FS6)
    # 4.26
    rainbowPiano.play_note(GS6, .304)
    rainbowPiano.play_note(FS6)
    rainbowPiano.play_note(F6, .507)
    time.sleep(.241)
    rainbowPiano.play_note(F6, .304)
    time.sleep(.1)
    # 6.15
    rainbowPiano.play_note(DS6, .315)
    rainbowPiano.play_note(F6)
    rainbowPiano.play_note(FS6, .517)
    time.sleep(.304)
    rainbowPiano.play_note(F6)
    time.sleep(.1)
    rainbowPiano.play_note(DS6)
    time.sleep(.1)
    # 8.03
    rainbowPiano.play_note(CS6)
    rainbowPiano.play_note(DS6)
    rainbowPiano.play_note(F6, .506)
    time.sleep(.304)
    rainbowPiano.play_note(DS6)
    time.sleep(.1)
    rainbowPiano.play_note(CS6)
    time.sleep(.1)
    # 9.22
    rainbowPiano.play_note(C6, .304)
    rainbowPiano.play_note(D6)
    rainbowPiano.play_note(E6, .497)
    time.sleep(.304)
    rainbowPiano.play_note(G6, .314)
    time.sleep(.1)
    # 11.11
    rainbowPiano.play_note(F6)
    time.sleep(.1)
    rainbowPiano.play_note(ceil((AS5 + F5) / 2))
    time.sleep(.001)
    rainbowPiano.play_note(ceil((AS5 + F5) / 2))
    time.sleep(.001)
    rainbowPiano.play_note(ceil((AS5 + F5) / 2))
    time.sleep(.1)
    rainbowPiano.play_note(ceil((AS5 + F5) / 2))
    time.sleep(.001)
    rainbowPiano.play_note(ceil((AS5 + F5) / 2))
    time.sleep(.001)
    rainbowPiano.play_note(ceil((AS5 + F5) / 2))

    #rainbowPiano.clear()



# POST stuff for testing
f = open('silent.txt')
if f.read() == 'f':
    play_zelda()

    rainbowPiano.inital()

else:
    f.close()
    f = open('silent.txt', 'w')
    f.write('f')

f.close()
machine.freq(40000000)
rainbowPiano.keys()

