#include<stdio.h>

int main(){
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter array elements : ");
    int a[100];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter Key = ");
    int key;
    scanf("%d", &key);
    int check = 0;
    printf("Elements' Index according to the key : ");
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]*a[i]+a[j]*a[j]==key){
                check = 1;
                printf("%d,%d ", (i+1), (j+1));
            }
        }
    }
    if(check == 0) printf("No such index found!");
    return 0;
}