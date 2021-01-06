//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b;
	scanf("%d",&t);
	char s[100];
	while(t--)
	{
	    scanf("%s",&s);
	    a=0;b=0;
	    for(int i=0;s[i]!='\0';i++)
	    {
	        if(s[i]=='a')
	        a++;
	        if(s[i]=='b')
	        b++;
	    }
	    if(a==0||b==0)
	    printf("0\n");
	    else if(a>b)
	        printf("%d\n",b);
	        else if(a<b)
	        printf("%d\n",a);
	        else if(a==b)
	        printf("%d\n",a);
	}
	return 0;
}

