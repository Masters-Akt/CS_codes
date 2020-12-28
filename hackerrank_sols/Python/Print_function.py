#Kumar Ankit
import math
if __name__ == '__main__':
    n = int(input())
    sum=0
    for i in range(1,n+1):
        sum = sum*pow(10, math.floor(math.log10(i) +1)) +i;
    print(sum)
