f = open('Grace_kid.py', 'w')
s = """f = open('Grace_kid.py', 'w')
s = %c%c%c%s%c%c%c
nul1 = lambda (x) : x+1
nul2 = lambda (y) : y*2
func = lambda f : f.write(s %% (34,34,34,s,34,34,34))
func(f)
f.close()"""
nul1 = lambda (x) : x+1
nul2 = lambda (y) : y*2
func = lambda f : f.write(s % (34,34,34,s,34,34,34))
func(f)
f.close()