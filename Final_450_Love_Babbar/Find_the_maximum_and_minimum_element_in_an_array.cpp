//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int max;
    int min;
};

struct Pair minmaxf(int arr[], int n){
    struct Pair minmax;
    if(n==1){
        minmax.max=arr[0];
        minmax.min=arr[0];
        return minmax;
    }
    if(arr[0]>arr[1]){
        minmax.min=arr[1];
        minmax.max=arr[0];
    }else{
        minmax.min=arr[0];
        minmax.max=arr[1];
    }
    for(int i=2;i<n;i++){
        if(arr[i]>minmax.max) minmax.max=arr[i];
        if(arr[i]<minmax.min) minmax.min=arr[i];
    }
    return minmax;
}

int first_try(int a, int b, int c){
    if(a>b){
        if(b>c) return c;
        if(c>a) return a;
        return b;
    }else{
        if(a>c) return c;
        if(c>b) return b;
        return a;
    }
}

int main(){
    int a=1, b=2, c=3;
    cout<<"Getting middle element:\n";
    cout<<first_try(a, b, c);
    int arr[10]={10, 56, 34, 83, 90, 45, 18, 96, 49, 28};
    struct Pair minmax = minmaxf(arr, 10);
    cout<<"Maximum = "<<minmax.max<<" Minimum = "<<minmax.min<<endl;
    return 0;
}