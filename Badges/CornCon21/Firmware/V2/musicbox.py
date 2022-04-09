# My attempt to make a piezo music player function
# William Rickert April2022

# The file to be played has a format of a series of tuples
# Each tuple is a note that is a musical note then the pause before the next note

from time import sleep_ms


def play(sweetJams, piezo):
   for i in range(len(sweetJams)):
      piezo.freq(getFrequency(sweetJams[i][0]))
      sleep_ms(sweetJams[i][1])


   piezo.deinit()




#Note format is Letter + Octave, i.e. C4 'middle C'
def getFrequency(note, A4=440):
    notes = ['A', 'A#', 'B', 'C', 'C#', 'D', 'D#', 'E', 'F', 'F#', 'G', 'G#']

    octave = int(note[2]) if len(note) == 3 else int(note[1])
        
    keyNumber = notes.index(note[0:-1]);
    
    if (keyNumber < 3) :
        keyNumber = keyNumber + 12 + ((octave - 1) * 12) + 1; 
    else:
        keyNumber = keyNumber + ((octave - 1) * 12) + 1; 

    return int(A4 * 2** ((keyNumber- 49) / 12))
