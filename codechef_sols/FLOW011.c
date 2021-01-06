//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,sal;
	float hra, da, gs;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&sal);
	    if(sal<1500)
	    {
	        hra=sal*0.1;
	        da=sal*0.9;
	        gs=sal+hra+da;
	        printf("%0.2f\n",gs);
	    }
	    else if(sal>=1500)
	    {
	        da=sal*0.98;
	        gs=sal+500+da;
	        printf("%0.2f\n",gs);
	    }
	}
	return 0;
}

