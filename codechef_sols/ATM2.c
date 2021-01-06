//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,k,i,sum;
	scanf("%d",&t);
	while(t--)
	{
	    sum=0;
	    scanf("%d %d",&n,&k);
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	    scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        sum=sum+a[i];
	        if(sum<=k)
	        printf("1");
	        else
	        {
	            sum=sum-a[i];
	            printf("0");
	        }
	        
	    }printf("\n");
	}
	return 0;
}

