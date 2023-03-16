def space(s):
    s = s.strip()
    while "  " in s:
        s = s.replace("  ", " ")
    return s

while (True):
    try:
        s = input()
        s = space(s)
        s = s.title()

        print(s)
    except:
        break