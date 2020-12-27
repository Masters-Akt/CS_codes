//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;

/*
Using python list slicing:

def reverseList(A):
  print( A[::-1])

*/

void recursive_method(int a[], int start, int end){
    if(start>=end) return;
    int temp = a[start];
    a[start] = a[end];
    a[end] = temp;
    recursive_method(a, start+1, end-1);
}

void iterative_method(int a[], int start, int end){ //O(n)
    while(start<end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}

string first_try(string s){
    string ans="";
    for(int i=s.length()-1;i>=0;i--){
        ans=ans+s[i];
    }
    return ans;
}

void print_array(int a[], int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    string s;
    s = "sadggvcvjkabj";
    cout<<first_try(s)<<endl;
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    iterative_method(a, 0, n-1);
    print_array(a, n);
    recursive_method(a, 0, n-1);
    print_array(a, n);
    return 0;
}