#include<stdio.h>

int main(){
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter elements : ");
    int a[100];
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++){
        int temp = 1;
        for(int j=0;j<n;j++){
            if(i!=j){
                temp*=a[j];
            }
        }
        printf("%d ", temp);
    }
    return 0;
}