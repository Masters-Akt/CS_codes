#Kumar Ankit
if __name__ == '__main__':
    s = input()
    for i in s:
        if(i.isalnum()==True):
            print(True)
            break
    else:
        print(False)
    for i in s:
        if(i.isalpha()==True):
            print(True)
            break
    else:
        print(False)
    for i in s:
        if(i.isdigit()==True):
            print(True)
            break
    else:
        print(False)
    for i in s:
        if(i.islower()==True):
            print(True)
            break
    else:
        print(False)
    for i in s:
        if(i.isupper()==True):
            print(True)
            break
    else:
        print(False)
