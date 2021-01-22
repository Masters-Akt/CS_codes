//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;

int first_try(int arr[], int n, int k){
    sort(arr, arr+n);
    return arr[k-1];
}

int main(){
    int a[10] = {23, 45, 98, 61, 50, 25, 49, 15, 65, 66};
    int k = 3;
    cout<<"3rd smallest = "<<first_try(a, 10, k)<<endl;
    return 0;
}