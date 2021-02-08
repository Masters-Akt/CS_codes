tc = int(input())
for _ in range(tc):
    n = int(input())
    s = input()
    p = input()
    z=o=0
    for i in range(n):
        if s[i] != p[i]:
            if s[i]=='0':
                z+=1
            else:
                o+=1
    if z!=o:
        print("No")
        continue
    c1=0
    ans = True
    for i in range(n):
        if s[i] != p[i]:
            if s[i]=='0':
                if c1>0:
                    c1-=1
                else:
                    ans = False
                    break
            else:
                c1+=1
    print("Yes" if ans else "No")