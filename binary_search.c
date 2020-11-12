//Kumar Ankit
//not working
#include<stdio.h>

int binary_search(int a[], int l, int u, int v){ //without recursion
    while(l<=u){
        int mid = (l+u)/2;
        if(a[mid]==v) return mid;
        if(a[mid]<v) l=mid+1;
        else u=mid-1;
    }
    return -1;
}

int bsearch(int a[], int l, int u, int v){ //using recursion
    if(l<=u){
        int m = (l+u)/2;
        if(a[m]==v) return m;
        if(a[m]<v) return bsearch(a, m+1, u, v);
        return bsearch(a, l, m-1, v);
    }
    return -1;
}

int main(){
    int a[10] = {23, 45, 56, 67, 78, 89, 20, 65, 62, 11};
    int value = 62;
    int index = binary_search(a, 0, 9, value);
    if(index==-1) printf("Not found!");
    else printf("Found at index %d.", index);
    printf("\nUsing recursion : ");
    index = bsearch(a, 0, 9, value);
    if(index==-1) printf("Not found!");
    else printf("Found at index %d.", index);
    return 0;
}
//not working for later half of array...check it