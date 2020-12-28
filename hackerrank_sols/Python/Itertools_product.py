#Kumar Ankit
from itertools import product
a=list(input().split(" "))
b=list(input().split(" "))
s=(list(product(a,b)))
print(str(s).replace("[","").replace("]","").replace("'","",4*len(s)).replace("),",")"))
