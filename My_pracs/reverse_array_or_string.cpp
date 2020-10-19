#include<bits/stdc++.h>
using namespace std;

void printArray(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

//Method 1
//
void reverseArray(int a[], int start, int end){
    while(start<end){ //interchange first and last...2nd and 2nd last...so on
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int a[] = {1,3,6,7,3,4,9,0,4,5,7,12,45,67,54};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Original Array : ";
    printArray(a,n);
    cout<<"Method 1:"<<endl;
    reverseArray(a,0,n-1);
    cout<<"Reverse : ";
    printArray(a,n);
    return 0;
}