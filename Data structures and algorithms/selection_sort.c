//Kumar Ankit
#include<stdio.h>

void selection_sort(int a[], int n){
    for(int i=0;i<n-1;i++){
        int min = i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min = j;
            }
        }
        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main(){
    int a[] = {5, 3, 2, 9, 1, 6, 4};
    selection_sort(a, 7);
    for(int i=0;i<7;i++) printf("%d ", a[i]);
    return 0;
}