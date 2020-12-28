#Kumar Ankit
from itertools import permutations
s,n=input().split()
s=(list(s))
l=sorted((list(permutations(s,int(n)))))
for i in l:
    print(str(i).replace("(","").replace(")","").replace(", ","").replace("'","",2*int(n)).replace(",",""))
