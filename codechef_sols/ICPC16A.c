//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,x1,y1,x2,y2;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	    if(x1==x2)
	    {
	        if(y1>y2)
	        printf("down\n");
	        else
	        printf("up\n");
	    }
	    else if(y1==y2)
	    {
	        if(x1>x2)
	        printf("left\n");
	        else
	        printf("right\n");
	    }
	    else
	    printf("sad\n");
	}
	return 0;
}

