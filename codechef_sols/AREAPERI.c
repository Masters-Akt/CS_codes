//Kumar Ankit
#include <stdio.h>
int main(void) {
    int l,b,peri,area;
    scanf("%d %d",&l,&b);
    if(l>=1&&b>=1&&l<=1000&&b<=1000)
    {
        peri=2*(l+b);
        area=l*b;
        if(area>peri)
        {
            printf("Area\n");
            printf("%d\n",area);
        }
        else if(peri>area)
        {
            printf("Peri\n");
            printf("%d\n",peri);
        }
        else if(area==peri)
        {
            printf("Eq\n");
            printf("%d\n",peri);
        }
    }
	return 0;
}