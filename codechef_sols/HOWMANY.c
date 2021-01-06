//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int n,count=0;
	    scanf("%d",&n);
	    while(n>0)
	    {
	        n=n/10;
	        count++;
	    }
	    if(count==1)
	    printf("1\n");
	    else if(count==2)
	    printf("2\n");
	    else if(count==3)
	    printf("3\n");
	    else
	    printf("More than 3 digits\n");
	return 0;
}

