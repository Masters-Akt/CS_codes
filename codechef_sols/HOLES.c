//Kumar Ankit
#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	char a[100];
	while(t-->0){
	    scanf("%s",a);
	    int l=strlen(a);
	    int h=0;
	    for(int i=0;i<l;i++){
	        if(a[i]=='B')
	        h+=2;
	        else if(a[i]=='A'||a[i]=='D'||a[i]=='O'||a[i]=='P'||a[i]=='Q'||a[i]=='R')
	        h++;
	    }
	    printf("%d\n",h);
	}
	return 0;
}

