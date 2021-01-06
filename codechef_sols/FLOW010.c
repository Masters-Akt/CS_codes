//Kumar Ankit
#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,j;
	scanf("%d",&t);
	char s[t];
	for(i=0;i<t;i++)
	{
	    scanf("%s",&s[i]);
	}
	for(j=0;j<t;j++)
	{
	    if(s[j]=='B'||s[j]=='b')
	    printf("BattleShip");
	    else if(s[j]=='C'||s[j]=='c')
	    printf("Cruiser");
	    else if(s[j]=='D'||s[j]=='d')
	    printf("Destroyer");
	    else
	    printf("Frigate");
	    printf("\n");
	}
	return 0;
}

