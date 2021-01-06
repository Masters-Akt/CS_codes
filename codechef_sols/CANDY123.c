//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,a,b,sumbob,sumlimak;
	scanf("%d",&t);
	while(t-->0){
	    scanf("%d %d",&a,&b);
	    sumbob=0;sumlimak=0;
	    i=1;
	    while(!(sumlimak>a||sumbob>b)){
	        if(i%2==1){
	            sumlimak+=i;
	        }
	        else{
	            sumbob+=i;
	        }
	        if(sumlimak>a){
	            printf("Bob\n");
	        }
	        else if(sumbob>b){
	            printf("Limak\n");
	        }
	        i++;
	    }
	}
	return 0;
}

