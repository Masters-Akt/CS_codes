//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;

void iterative_method(int a[], int start, int end){
    int n = end+1;
    while(start<end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

string first_try(string s){
    string ans="";
    for(int i=s.length()-1;i>=0;i--){
        ans=ans+s[i];
    }
    return ans;
}

int main(){
    string s;
    s = "sadggvcvjkabj";
    cout<<first_try(s)<<endl;
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n = 10;
    iterative_method(a, 0, n-1);
    return 0;
}