#include<stdio.h>

int main(){
    int n;
    printf("Enter N : ");
    scanf("%d", &n);
    int a[100];
    for (int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    int k = -1;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            k = i-1;
            break;
        }
    }
    if(k==-1) k=n-1;
    printf("The breaking point index is %d.", k+1);
    return 0;
}