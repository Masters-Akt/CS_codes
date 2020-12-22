//Kumar Ankit
#include <stdio.h>
#include <math.h>
int main(void) {
	int t,i,k,p1,p2;
	scanf("%d",&t);
	if(t>=1&&(t<=pow(10,5)))
	{
	    for(i=1;i<=t;i++)
	    {
	        scanf("%d %d %d",&p1,&p2,&k);
	        if(k>=1&&p1>=0&&p2>=0&&(k<=pow(10,9))&&(p1<=pow(10,9))&&(p2<=pow(10,9)))
	        {
	            if((((p1+p2)%(2*k))==0)||(((p1+p2)%(2*k))<k))
	            printf("CHEF\n");
	            else
	            printf("COOK\n");
	        }
	    }
	}
	return 0;
}

