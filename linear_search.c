//Kumar Ankit
#include<stdio.h>

int l_search(int a[], int size, int v){
    int i;
    for(i=0;i<size;i++){
        if(a[i]==v)
            return i;
    }
    return -1;
}

int main(){
    int a[10] = {24, 76, 43, 11, 90, 34, 58, 23, 52, 74};
    int value = 23;
    int b = l_search(a, 10, value);
    if(b==-1) printf("Not found!");
    else printf("Found at %d index.", b);
    return 0;
}