//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t-->0){
	    int n,k;
	    scanf("%d %d",&n,&k);
	    int a[n],s=0;
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	        s+=a[i];
	    }
	    if(s<=k){
	        printf("Yes\n");
	    }
	    else{
	        printf("No\n");
	    }
	}
	return 0;
}

