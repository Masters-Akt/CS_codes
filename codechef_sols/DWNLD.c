//Kumar Ankit
#include <stdio.h>
int main(void) {
	// your code goes here
	int tc,n,k,i,t,d,j,sum,st,ct;
	scanf("%d",&tc);
	while(tc-->0){
	    sum=0;st=0;
	    scanf("%d %d",&n,&k);
	    int s[n][2];
	    for(i=0;i<n;i++){
	        scanf("%d %d",&s[i][0],&s[i][1]);
	    }
	    for(i=0;i<n;i++){
	        st+=s[i][0];
	        ct=i;
	        if(st>=k){
	            sum=sum+(st-k)*s[i][1];
	                for(int j=i+1;j<n;j++){
	                    sum+=s[j][0]*s[j][1];
	                }
	            break;
	        }
	    }
	    printf("%d\n",sum);
	}
	return 0;
}