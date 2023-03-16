while (True):
    try:
        s = input()

        s = ''.join([i for i in s if i.isalnum()])
        res = ''.join([i for i in s if not i.isdigit()])
        
        res = res.lower()
        res = res.replace(" ", "")
        
        if (res[::-1] == res):
            print("Yes")
        else:
            print("No")

    except:
        break
