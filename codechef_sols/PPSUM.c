//Kumar Ankit
#include <stdio.h>
int sumn(int n){
    int s=0;
    for(int i=1;i<=n;i++){
        s+=i;
    }
    return s;
}
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int d,n;
	    scanf("%d %d",&d,&n);
	    while(d>0){
	        n=sumn(n);
	        d--;
	    }
	
	    printf("%d\n",n);
	}
	
	return 0;
}

