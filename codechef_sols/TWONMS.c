//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i;
	long long int a,b,n;
	scanf("%d",&t);
		while(t--)
	{
	    long long int a,b,n,p;
	    scanf("%lld %lld %lld",&a,&b,&n);
	    if(n%2==0)
	    {
	      if(a>b)
	      {
	          printf("%lld\n",a/b);
	      }
	      else
	      {
	           printf("%lld\n",b/a);
	      }
	    }
	    else
	    {
	     if(a>b)
	      {
	          printf("%lld\n",2*a/b);
	      }
	      else
	      {
	        if(2*a>b)
	          {
	              printf("%lld\n",2*a/b);
	          }
	          else
	          {
	              printf("%lld\n",b/(2*a));
	          }   
	      }
	    }
	}
	return 0;
}

