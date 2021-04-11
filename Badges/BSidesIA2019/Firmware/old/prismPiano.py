import machine
import time
import neopixel



pin17 = machine.Pin(17)
speaker = machine.PWM(pin17)
speaker.duty(0)

t0 = machine.TouchPad(machine.Pin(4))
t1 = machine.TouchPad(machine.Pin(12))
t2 = machine.TouchPad(machine.Pin(14))
t3 = machine.TouchPad(machine.Pin(15))

np = neopixel.NeoPixel(machine.Pin(25), 10, bpp=4)

current = 0
thresh = 350
colors = [(0,0,0,0),(0,0,0,0)]

def stackColor(key):
    global colors

    if key == 1:
        colors.insert(0,(255,0,0,0))
    if key == 2:
        colors.insert(0,(0,255,0,0))
    if key == 3:
        colors.insert(0,(0,0,255,0))
    if key == 4:
        colors.insert(0,(0,0,0,255))

    print(colors)
    
    size = len(colors)
    if size > 10:
        size = 10
        colors.pop()

    for i in range(0, size): 
        np[i] = colors[i]

    np.write()

def keys():
    global thresh
    while True:
        if t0.read() < thresh:
            time.sleep(0.02)
            if t0.read() < thresh:
                setTone(1)
        elif t1.read() < thresh:
            time.sleep(0.02)
            if t1.read() < thresh:
                setTone(2)
        elif t2.read() < thresh:
            time.sleep(0.02)
            if t2.read() < thresh:
                setTone(3)
        elif t3.read() < thresh:
            time.sleep(0.02)
            if t3.read() < thresh:
                setTone(4)
        else:
            setTone(0)

def setTone(key):
    global current
    if key == 0:
        speaker.duty(0)
        current = 0
    elif key == 1 and current != key:
        stackColor(1)
        print("1")
        speaker.duty(100)
        speaker.freq(440)
        current = 1
    elif key == 2 and current != key:
        stackColor(2)
        print("2")
        speaker.duty(100)
        speaker.freq(494)
        current = 2
    elif key == 3 and current != key:
        stackColor(3)
        print("3")
        speaker.duty(100)
        speaker.freq(554)
        current = 3
    elif key == 4 and current != key:
        stackColor(4)
        print("4")
        speaker.duty(100)
        speaker.freq(587)
        current = 4
