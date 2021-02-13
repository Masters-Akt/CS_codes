//Kumar Ankit
#include<stdio.h>
#include<string.h>

char s[100];
char t[100];

int strend(char str1[], char str2[]){
    int j=strlen(s)-1;
    for(int i=strlen(t)-1;i>=0;i--){
        if(str2[i] != str1[j]){
            return 0;
        }
        j--;
    }
    return 1;
}

int main(){
    printf("Enter first string:\n");
    scanf("%[^\n]%*c", s);
    printf("Enter second string:\n");
    scanf("%[^\n]%*c", t);
    int res = strend(s,t);
    printf("%d\n", res);
    return 0;
}