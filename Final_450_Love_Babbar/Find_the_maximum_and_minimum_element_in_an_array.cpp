//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int max;
    int min;
};

struct Pair minmaxf(int arr[], int n){ //simple linear search
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

struct Pair minmaxtournament(int arr[], int low, int high){ //tournament method
    struct Pair minmax;
    if(low==high){
        minmax.min = arr[low];
        minmax.max = arr[low];
        return minmax;
    }
    if(high == low+1){
        if(arr[low]>arr[high]){
            minmax.min = arr[high];
            minmax.max = arr[low];
        }else{
            minmax.min = arr[low];
            minmax.max = arr[high];
        }
        return minmax;
    }
    int mid = (low + high)/2;
    struct Pair mml = minmaxtournament(arr, low, mid);
    struct Pair mmr = minmaxtournament(arr, mid+1, high);
    if(mml.min < mmr.min) minmax.min = mml.min;
    else minmax.min = mmr.min;
    if(mml.max > mmr.max) minmax.max = mml.max;
    else minmax.max = mmr.max;
    return minmax;
}

int main(){
    int a=1, b=2, c=3;
    cout<<"Getting middle element:\n";
    cout<<first_try(a, b, c);
    int arr[10]={10, 56, 34, 83, 90, 45, 18, 96, 49, 28};
    struct Pair minmax = minmaxf(arr, 10);
    cout<<"Maximum = "<<minmax.max<<" Minimum = "<<minmax.min<<endl;
    struct Pair minmax2 = minmaxtournament(arr, 0, 9);
    cout<<"Maximum = "<<minmax2.max<<" Minimum = "<<minmax2.min<<endl;
    return 0;
}