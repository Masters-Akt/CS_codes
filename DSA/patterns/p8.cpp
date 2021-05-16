//Inverted Number Pattern
/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}