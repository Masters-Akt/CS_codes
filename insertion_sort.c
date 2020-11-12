//Kumar Ankit
#include<stdio.h>

void insertion_sort(int a[], int size){
    int i, j, temp;
    for(i=1;i<size;i++){
        temp = a[i];
        for(j=i-1;j>=0;j--){
            if(a[j]>temp){
                a[j+1] = a[j];
            }else{
                break;
            }
        }
        a[j+1] = temp;
    }
}

int main(){
    int a[] = {5, 9, 3, 8, 4, 2, 6};
    insertion_sort(a, 7);
    for(int i=0;i<7;i++) printf("%d ", a[i]);
    return 0;
}