//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1) cout<<n;
    else if(n<=3) cout<<"NO SOLUTION";
    else{
        if(n%2==1){
            for(int i=n;i>0;i-=2){
                cout<<i<<" ";
            }
            for(int i=n-1;i>0;i-=2){
                cout<<i<<" ";
            }
        }else{
            for(int i=2;i<=n;i+=2){
                cout<<i<<" ";
            }
            for(int i=1;i<=n;i+=2){
                cout<<i<<" ";
            }   
        }
    }
    return 0;
}