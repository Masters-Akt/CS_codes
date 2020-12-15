//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if((a+b)%3==0){
            if(a<b){
                if(b-a<=a) cout<<"YES\n";
                else cout<<"NO\n";
            }else{
                if(a-b<=b) cout<<"YES\n";
                else cout<<"NO\n";
            }
        }
        else cout<<"NO\n";
    }
    return 0;
}