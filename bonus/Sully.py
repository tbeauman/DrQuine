import os
if __name__ == '__main__':
    i = 1
    if i <= 0:
        exit()
    if '_' in __file__:
        i = i - 1
    s = """import os
if __name__ == '__main__':
    i = %d
    if i <= 0:
        exit()
    if '_' in __file__:
        i = i - 1
    s = %c%c%c%s%c%c%c
    f = open("Sully_%%d.py"%%i, 'w')
    f.write(s%%(i,34,34,34,s,34,34,34))
    f.close()
    os.system("python Sully_%%d.py"%%i)"""
    f = open("Sully_%d.py"%i, 'w')
    f.write(s%(i,34,34,34,s,34,34,34))
    f.close()
    os.system("python Sully_%d.py"%i)