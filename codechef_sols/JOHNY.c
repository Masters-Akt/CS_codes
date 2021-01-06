//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t-->0){
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	    }
	    int k;
	    scanf("%d",&k);
	    int note=a[k-1];
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            if(a[i]>a[j]){
	                int t=a[i];
	                a[i]=a[j];
	                a[j]=t;
	            }
	        }
	    }
	    int y;
	    for(int i=0;i<n;i++){
	        if(a[i]==note){
	          y=i+1;  
	        }
	    }
	    printf("%d\n",y);
	}
	return 0;
}

