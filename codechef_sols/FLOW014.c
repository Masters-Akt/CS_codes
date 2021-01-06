//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	float h,cc,ts;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%f %f %f",&h,&cc,&ts);
	    if(h>50&&cc<0.7&&ts>5600)
	    printf("10\n");
	    else if(h>50&&cc<0.7&&ts<=5600)
	    printf("9\n");
	    else if(h<=50&&cc<0.7&&ts>5600)
	    printf("8\n");
	    else if(h>50&&cc>=0.7&&ts>5600)
	    printf("7\n");
	    else if((h>50&&cc>=0.7&&ts<=5600)||(h<=50&&cc<0.7&&ts<=5600)||(h<=50&&cc>=0.7&&ts>5600))
	    printf("6\n");
	    else if(h<=50&&cc>=0.7&&ts<=5600)
	    printf("5\n");
	}
	return 0;
}

