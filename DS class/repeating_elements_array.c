//Kumar Ankit
#include<stdio.h>

void find_repeated(int a[], int n){
    int count = 0;
    printf("Repeating elements are: ");
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                printf("%d ", a[i]);
            }
        }
    }
}

int main(){
    printf("Enter size of the array : ");
    int n;
    scanf("%d", &n);
    int a[n];
    printf("Enter elements : ");
    for(int i=0;i<n;i++) scanf("%d", &a[i]);
    find_repeated(a, n);
    return 0;
}