//Kumar Ankit
#include <stdio.h>

int main(void) {
	int t,i,a,b,c,s;
	scanf("%d",&t);
	if(t>=1&&t<=1000)
	{
	    for(i=1;i<=t;i++)
	    {
	        scanf("%d %d %d",&a,&b,&c);
	        if(a>=1&&b>=1&&c>=1&&a<=180&&b<=180&&c<=180)
	        {
	            s=a+b+c;
	            if(s==180)
	            printf("YES\n");
	            else
	            printf("NO\n");
	        }
	        else
	        printf("NO\n");
	    }
	}
	return 0;
}

