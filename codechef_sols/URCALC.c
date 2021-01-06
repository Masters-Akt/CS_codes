//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	 int a;
    scanf("%d\n",&a);
    int b;
    scanf("%d\n",&b);
    char c;
    scanf("%c\n",&c);
    if(c=='-'){
        printf("%d",a-b);
    }
    else if(c=='+'){
        printf("%d",a+b);
    }
    else if(c=='*'){
        printf("%d",a*b);
    }
    else if(c=='/'){
        double d = (double) a / (double) b ;
        printf("%.6lf",d);
    }
	return 0;
}

