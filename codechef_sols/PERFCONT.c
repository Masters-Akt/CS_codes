//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,p;
	    scanf("%d %d",&n,&p);
	    int a[n];
	    int c=0,h=0;
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	        if(a[i]>=p/2)
	        c++;
	        if(a[i]<=p/10)
	        h++;
	    }
	    if(c==1&&h==2)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}

