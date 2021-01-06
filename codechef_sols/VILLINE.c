//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int n,m,c;
	scanf("%d",&n);
	scanf("%d %d",&m,&c);
	int xi[n],yi[n],pi[n];
	for(int i=0;i<n;i++){
	    scanf("%d",&xi[i]);
	    scanf("%d",&yi[i]);
	    scanf("%d",&pi[i]);
	}
	int sumup=0,sumdown=0;
	for(int i=0;i<n;i++){
	    if(m*xi[i]+c-yi[i]>0){
	        sumup=sumup+pi[i];
	    }
	    else{
	        sumdown=sumdown+pi[i];
	    }
	}
	if(sumup>=sumdown){
	    printf("%d\n",sumup);
	}
	else{
	    printf("%d\n",sumdown);
	}
	return 0;
}

