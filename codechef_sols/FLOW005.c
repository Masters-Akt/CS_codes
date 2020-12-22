//Kumar Ankit
#include <stdio.h>
int main(void) {
	int t,i,n,count,hundred,fifty,ten,five,two,one,t1,t2,t3,t4,t5,t6;
	scanf("%d",&t);
	if(t>=1&&t<=1000)
	{
	for(i=1;i<=t;i++)
	{
	    scanf("%d",&n);
	    if(n>=1&&n<=1000000)
	    {
	        count=0,hundred=0,fifty=0,ten=0,five=0,two=0,one=0;
	        t1=n;
	        hundred=hundred+t1/100;
	        t2=n%100;
	        fifty=fifty+t2/50;
	        t3=t2%50;
	        ten=ten+t3/10;
	        t4=t3%10;
	        five=five+t4/5;
	        t5=t4%5;
	        two=two+t5/2;
	        t6=t5%2;
	        one=one+t6/1;
	        count=hundred+fifty+ten+five+two+one;
	        printf("%d\n",count);
	    }
	}
	}
	return 0;
}