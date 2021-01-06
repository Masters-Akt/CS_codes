//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,n,x;
	scanf("%d",&t);
	while(t-->0){
	    scanf("%d %d",&n,&x);
	    int a[n];
	    for(i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    int c=0;
	    for(i=0;i<n;i++){
	        if(a[i]>=x)
	        c++;
	    }
	    if(c>0)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

