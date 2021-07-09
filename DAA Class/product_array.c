#include<stdio.h>

int main(){
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter elements : ");
    int a[100];
    int prod = 1;
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
        prod*=a[i];
    }
    printf("Required output is : ");
    for(int i=0;i<n;i++){
        printf("%d ", prod/a[i]);
    }
    return 0;
}