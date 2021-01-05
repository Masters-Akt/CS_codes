//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,i,flag;
	scanf("%d",&t);
	while(t--)
	{
	    flag=0;
	    scanf("%d",&n);
	    for(i=1;i<=n;i++)
	    {
	        if(n%i==0)
	        flag++;
	    }
	    if(n==1)
	    printf("no\n");
	    if(flag==2)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

