//Kumar Ankit
#include <stdio.h>
int main(void) {
    int t,i,a,b,c,d;
    scanf("%d",&t);
    if(t>=1&&t<=1000)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%d %d %d %d",&a,&b,&c,&d);
            if(a>=1&&b>=1&&c>=1&&d>=1&&a<=10000&&b<=10000&&c<=10000&&d<=10000)
            {
                if(a==b)
                {
                    if(c==d)
                    printf("YES\n");
                    else
                    printf("NO\n");
                }
                else if(a==c)
                {
                    if(b==d)
                    printf("YES\n");
                    else
                    printf("NO\n");
                }
                else if(a==d)
                {
                    if(b==c)
                    printf("YES\n");
                    else
                    printf("NO\n");
                }
                else
                printf("NO\n");
            }
        }
    }
	return 0;
}