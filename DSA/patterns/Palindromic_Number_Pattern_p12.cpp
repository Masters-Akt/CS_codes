//Palindromic Number Pattern
/*
For n=5
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int space = n-i;
        for(int j=1;j<=space;j++){
            cout<<"  ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}