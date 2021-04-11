import rainbowPiano

try:
    f = open('silent.txt')
    f.close()
except OSError:
    f = open('silent.txt', 'w')
    f.write('f')
    f.close()
    g = open('flag.txt', 'w')
    g.write('flag(the_proof_is_in_the_python)')
    g.close()

