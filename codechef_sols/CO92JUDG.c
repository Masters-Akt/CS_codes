//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n;
	    scanf("%d",&n);
	    int a[n],b[n],maxa=0,maxb=0,suma=0,sumb=0;
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	        suma+=a[i];
	        if(a[i]>maxa)
	        maxa=a[i];
	    }
	    for(int i=0;i<n;i++){
	        scanf("%d",&b[i]);
	        sumb+=b[i];
	        if(b[i]>maxb)
	        maxb=b[i];
	    }
	    suma=suma-maxa;
	    sumb=sumb-maxb;
	    if(suma<sumb){
	        printf("Alice\n");
	    }
	    else if(suma>sumb){
	        printf("Bob\n");
	    }
	    else if(suma=sumb){
	        printf("Draw\n");
	    }
	}
	return 0;
}

