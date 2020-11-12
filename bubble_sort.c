//Kumar Ankit
#include<stdio.h>

void bubble_sort(int a[], int n){
    int i, j, temp;
    for(i=0;i<n-1;i++){
        int count = 0;
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                count = 1;
            }
        }
        if(count==0) break;
    }
}

int main(){
    int a[] = {3, 4, 9, 6, 2, 8};
    bubble_sort(a, 6);
    for(int i=0;i<6;i++) printf("%d ", a[i]);
    return 0;
}