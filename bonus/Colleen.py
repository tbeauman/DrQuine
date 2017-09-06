def f():
    return
#com1
if __name__ == '__main__':
    f()
#   com2
    s = """def f():
    return
#com1
if __name__ == '__main__':
    f()
#   com2
    s = %c%c%c%s%c%c%c
    print(s%%(34,34,34,s,34,34,34))"""
    print(s%(34,34,34,s,34,34,34))
