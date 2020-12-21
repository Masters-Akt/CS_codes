//Kumar Ankit
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[1000];
    scanf("%s",&s);
    int l=0,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!='\0')
        l++;
    }
    for(int i=0;i<l;i++)
    {
        if(s[i]=='0')
        zero++;
        if(s[i]=='1')
        one++;
        if(s[i]=='2')
        two++;
        if(s[i]=='3')
        three++;
        if(s[i]=='4')
        four++;
        if(s[i]=='5')
        five++;
        if(s[i]=='6')
        six++;
        if(s[i]=='7')
        seven++;
        if(s[i]=='8')
        eight++;
        if(s[i]=='9')
        nine++;

    }
    printf("%d %d %d %d %d %d %d %d %d %d",zero,one,two,three,four,five,six,seven,eight,nine);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
