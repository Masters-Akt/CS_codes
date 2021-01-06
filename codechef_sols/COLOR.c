//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,r,g,b,n,i,max;
	scanf("%d",&t);
	while(t-->0){
	    scanf("%d",&n);
	    char s[n];
	    r=0;b=0;g=0;
	        scanf("%s",s);
	        for(i=0;i<n;i++){
	        if(s[i]=='R')
	        r++;
	        else if(s[i]=='B')
	        b++;
	        else if(s[i]=='G')
	        g++;
	            
	        }
	        if(r>=b){
	            if(r>=g)
	            max=r;
	            else
	            max=g;
	        }
	        else{
	            if(b>=g)
	            max=b;
	            else
	            max=g;
	        }
	    printf("%d\n",n-max);
	}
	return 0;
}

