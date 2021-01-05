//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&a,&b);
	    if(a>b)
	    printf(">\n");
	    else if(a<b)
	    printf("<\n");
	    else
	    printf("=\n");
	}
	return 0;
}

