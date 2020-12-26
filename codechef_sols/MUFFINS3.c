//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,a;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    if(n%2==0)
	    {
	        a=(n/2)+1;
	        printf("%d\n",a);
	    }
	    else
	    {
	        a=(n+1)/2;
	        printf("%d\n",a);
	    }
	}
	return 0;
}

