//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,k;
	scanf("%d",&t);
	while(t-->0){
	    scanf("%d %d",&n,&k);
	    long long int arr[n];
	    for(int i=0;i<n;i++){
	        scanf("%lld",&arr[i]);
	    }
	    long long int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        for(int i=1;i<=k-1;i++){
            sum=sum*2 + 1;
        }
        int num=sum+1;
        if(num%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
	}
	return 0;
}

