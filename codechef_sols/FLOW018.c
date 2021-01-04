//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,fact,i;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    fact=1;
	    for(i=1;i<=n;i++)
	    fact=fact*i;
	    printf("%d\n",fact);
	}
	return 0;
}

