//Kumar Ankit
#include <stdio.h>
int main() {
    int x; float y;
    scanf("%d %f",&x,&y);
    if(x>0&&x<=2000&&y>=0&&y<=2000&&y>x&&(x<=(y-0.5))&&x%5==0)
    {
        y=y-x-0.5;
        printf("%.2f",y);
    }
    else if(x>=y||x%5!=0||(x>(y-0.5))||x==0)
    {
        printf("%.2f",y);
    }
	return 0;
}