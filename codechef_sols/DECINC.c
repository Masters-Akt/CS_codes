//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	if(n%4==0)
	{
	printf("%d",++n);
	}
	else
	{
	printf("%d",--n);
	}
	return 0;
}

