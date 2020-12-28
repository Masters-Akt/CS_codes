//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,rn,r;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    rn=0;
	    while(n!=0)
	    {
	        r=n%10;
	        rn=rn*10+r;
	        n=n/10;
	    }
	    printf("%d\n",rn);
	}
	return 0;
}

