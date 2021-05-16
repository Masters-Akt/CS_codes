//0-1 Pattern
/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            cout<<"1 ";
        }
        for(int j=1;j<=i/2;j++){
            cout<<"0 1 ";
        }
        cout<<endl;
    }
    return 0;
}