//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n;
	scanf("%d",&t);
	while(t-->0){
	    scanf("%d",&n);
	    if(n==2010||n==2015||n==2016||n==2017||n==2019)
	    printf("HOSTED\n");
	    else
	    printf("NOT HOSTED\n");
	}
	return 0;
}

