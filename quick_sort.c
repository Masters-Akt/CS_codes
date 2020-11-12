//Kumar Ankit
//work needed...not working
#include<stdio.h>

int partition(int a[], int i, int j){
    int l=i, u=j, piv=a[i];
    while(1){
        while(a[l]<=piv && l<j) l--;
        while(a[u]>piv) u--;
        if(l<u){
            int temp = a[l];
            a[l] = a[u];
            a[u] = temp;
        }else break;
    }
    int temp = a[i];
    a[i] = a[u];
    a[u] = temp;
    return u;
}

void qsort(int a[], int l, int u){
    if(l<u){
        int pos = partition(a, l, u);
        qsort(a, l, pos-1);
        qsort(a, pos+1, u);
    }
}

int main(){
    int a[] = {5, 2, 9, 8, 12, 3, 6, 7, 4};
    qsort(a, 0, 8);
    for(int i=0;i<8;i++){
        printf("%d ", a[i]);
    }
    return 0;
}
//not printing the array