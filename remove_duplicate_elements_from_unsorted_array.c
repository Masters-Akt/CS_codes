//Kumar Ankit
#include<stdio.h>

int remove_duplicates(int a[], int n){
    int mark[n];
    for(int i=0;i<n;i++) mark[i]=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                mark[j] = 0;
            }
        }
    }
    int j = 0;
    for(int i=0;i<n;i++){
        if(mark[i]==1){
            a[j++] = a[i];
        }
    }
    return j;
}

int main(){
    printf("Enter original size of unsorted array : ");
    int n;
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of the unsorted array : ");
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    n = remove_duplicates(a, n);
    printf("After removing the duplicate elements : ");
    for(int i=0;i<n;i++) printf("%d ", a[i]);
    return 0;
}