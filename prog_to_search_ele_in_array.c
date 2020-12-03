#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("Enter size of array: ");
    int n;
    scanf("%d", &n);
    int a[5];
    for(int i=0;i<n;i++){
        a[i]=rand()%101;
    }
    for(int i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    return 0; 
}