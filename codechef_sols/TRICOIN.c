//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,i,sum,count;
	scanf("%d",&t);
	while(t--)
	{
	    sum=0,count=0;
	    scanf("%d",&n);
	    for(i=1;sum<=n;i++)
	    {
	        sum=sum+i;
	        count++;
	    }
	    printf("%d\n",--count);
	}
	return 0;
}

