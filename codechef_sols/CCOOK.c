//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	int a[5],sum;
	while(n--)
	{
	    sum=0;
	    for(int i=0;i<5;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(int i=0;i<5;i++)
	    {
	        if(a[i]==1)
	        sum=sum+ a[i];
	    }
	    if(sum==0)
	   printf("Beginner\n");
	   else if(sum==1)
	        printf("Junior Developer\n");
	  else if(sum==2)
	        printf("Middle Developer\n");
	   else if(sum==3)
	       printf("Senior Developer\n");
	  else if(sum==4)
	        printf("Hacker\n");
	   else if(sum==5)
	        printf("Jeff Dean\n");
	}
	return 0;
}

