//Kumar Ankit
#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,m,k;
	    scanf("%d %d %d",&n,&m,&k);
	    if(abs(n-m)==0){
	        printf("0\n");
	    }
	    else{
	        while(k>0){
	            if(n<m){
	                n++;
	            }
	            else{
	                m++;
	            }
	            if(abs(n-m)==0){
	                break;
	            }
	            k--;
	        }
	        printf("%d\n",abs(n-m));
	    }
	}
	return 0;
}

