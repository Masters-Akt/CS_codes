//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int n,i,a,r=0,nr=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a);
	if(a%2==0)
	r++;
	else
	nr++;
	}
	if(r>nr)
	printf("READY FOR BATTLE\n");
	else
	printf("NOT READY\n");
	return 0;
}

