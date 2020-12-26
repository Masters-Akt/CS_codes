//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,r,flag;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    flag=0;
	    while(n!=0)
	    {
	        r=n%10;
	        if(r==4)
	        flag=flag+1;
	        n=n/10;
	    }
	    printf("%d\n",flag);
	}
	return 0;
}

