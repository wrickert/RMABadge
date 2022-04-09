#Small script to convert from https://pianoletternotes.blogspot.com/ to
#My format for badge music

lookup = [['a','A'],['b','B'],['c','C'],['d','D'],['e','E'],['f','F'],['g','G'],['A','A#'],['B','B#'],['C','C#'],['D','D#'],['E','E#'],['F','F#'],['G','G#']]


def Convert():
   prevNote = ''
   octive = ''
   note = ''
   delay = 0
   while True:
      val = input("Copy what you can in here: ")
      print("[", end='') 

      for i in range(len(val)):
         if val[i].isnumeric(): 
            octive = val[i]
         elif val[i] == '-':
            delay += 1
         else:
            for j in range(len(lookup)):
               if val[i] == lookup[i][0]:
                  note = lookup[i][1]
            if prevNote != '':
               print( prevNote + str(octive) +"," + str(delay * 200) + "],[", end = '')
            prevNote = note
            delay = 0

      
      print(prevNote + str(octive) + "," + str(delay * 200) + "],")
      prevNote = note
      delay = 0
