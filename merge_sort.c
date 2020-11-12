//Kumar Ankit
//not working.....work needed
#include<stdio.h>
#include<stdlib.h>

void merge(int *a, int l, int m, int u){
    int i=l, j=m+1, k=0;
    int *b = (int *)malloc(sizeof(int)*(u-l+1));
    while(i<=m && j<=u){
        if(a[i]>a[j]){
            b[k++] = a[j++];
        }else{
            b[k++] = a[i++];
        }
    }
    while(i<=m){
        b[k++] = a[i++];
    }
    while(j<=u){
        b[k++] = a[i++];
    }
    for(i=0;i<(u-l+1);i++){
        a[l+i] = b[i];
    }
}

void merge_sort(int *a, int l, int u){
    if(l<u){
        int m = (l+u)/2;
        merge_sort(a, l, m);
        merge_sort(a, m+1, u);
        merge(a, l, m, u);
    }
}

int main(){
    int a[] = {2, 9, 6, 3, 4, 5, 7, 1};
    merge_sort(a, 0, 7);
    for(int i=0;i<8;i++) printf("%d ", a[i]);
    return 0;
}
//not printing the array