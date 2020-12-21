//Kumar Ankit
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int r,s=0;
    for(int i=1;i<=5;i++)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf("%d",s);
    return 0;
}

