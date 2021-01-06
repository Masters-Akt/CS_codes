//Kumar Ankit
// Note that this problem is for testing fast input-output.
#include <stdio.h> 
int main() {
	// Read the input n, k
	int n,k,i,count=0;
	scanf("%d %d",&n,&k);
	int s[n];
	for(i=0;i<n;i++)
	scanf("%d",&s[i]);
	for(i=0;i<n;i++)
	{
	    if(s[i]%k==0)
	    count++;
	}
	printf("%d",count);
	return 0;
}

