#Kumar Ankit
if __name__ == '__main__':
    N = int(input())
    l=[]
    for i in range(N):
        p=input().split()
        if(p[0]=="insert"):
            l.insert(int(p[1]),int(p[2]))
        elif(p[0]=="print"):
            print(l)
        elif(p[0]=="remove"):
            del l[l.index(int(p[1]))]
        elif(p[0]=="append"):
            l.append(int(p[1]))
        elif(p[0]=="sort"):
            l.sort()
        elif(p[0]=="pop"):
            l.pop()
        elif(p[0]=="reverse"):
            l.reverse()
