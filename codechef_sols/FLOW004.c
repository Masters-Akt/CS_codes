//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,fd,ld,sum;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    ld=n%10;
	    while(n>0)
	    {
	        fd=n%10;
	        n=n/10;
	    }
	    sum=fd+ld;
	    printf("%d\n",sum);
	}
	return 0;
}

