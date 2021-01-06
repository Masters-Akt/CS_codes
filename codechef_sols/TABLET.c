//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    long long int b;
	    scanf("%d %lld",&n,&b);
	    long long int w[n],h[n],p[n];
	    for(int i=0;i<n;i++){
	        scanf("%lld %lld %lld",&w[i],&h[i],&p[i]);
	    }
	    long long int max=0,d=0;
	    for(int i=0;i<n;i++){
	        if(p[i]<=b){
	            if(w[i]*h[i]>max){
	                max=w[i]*h[i];
	            }
	        }
	        else{
	            d++;
	        }
	    }
	    if(d==n){
	        printf("no tablet\n");
	    }
	    else{
	        printf("%lld\n",max);
	    }
	}
	return 0;
}

