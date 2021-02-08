test=int(input())
for t in range(test):
    n=int(input())
    fact=1
    while n>1:
        fact=fact*n
        n-=1
    print(fact)