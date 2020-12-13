//Kumar Ankit
#include<stdio.h>

int remove_duplicates(int a[], int n){
    if(n==0 || n==1) return n;
    int temp[n];
    int j=0;
    for(int i=0;i<n-1;i++){
        if(a[i] != a[i+1]){
            temp[j++] = a[i];
        }
    }
    temp[j++] = a[n-1];
    for(int i=0;i<j;i++){
        a[i] = temp[i];
    }
    return j;
}

int main(){
    printf("Enter number of elements of sorted array : ");
    int n;
    scanf("%d", &n);
    printf("Enter array elements : ");
    int a[n];
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    n = remove_duplicates(a, n);
    printf("After removing duplicate elements : ");
    for(int i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}