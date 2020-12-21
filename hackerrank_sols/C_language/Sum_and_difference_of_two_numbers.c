//Kumar Ankit
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b; float c,d;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    int intsum=a+b;
    int intdif=a-b;
    float fsum=c+d;
    float fdif=c-d;
    printf("%d %d\n",intsum,intdif);
    printf("%.1f %.1f",fsum,fdif);
    return 0;
}

