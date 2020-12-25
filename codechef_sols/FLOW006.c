//Kumar Ankit
#include <stdio.h>
int main(void) {
	int t,i,n,temp,r,sum;
	scanf("%d",&t);
	if(t>=1&&t<=1000)
	{
	for(i=1;i<=t;i++)
	{
	    scanf("%d",&n);
	    if(n>=1&&n<=1000000)
	    {
	        sum=0;
	        temp=n;
	        while(temp!=0)
	        {
	            r=temp%10;
	            sum=sum+r;
	            temp=temp/10;
	        }
	        printf("%d\n",sum);
	    }
	}
	}
	return 0;
}