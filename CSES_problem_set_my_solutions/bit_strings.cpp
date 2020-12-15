//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;

long long p(int n){
    long long ans = 1;
    while(n-->0){
        ans=(ans*2)%1000000007;
    }
    return ans%1000000007;
}

int main(){
    int n;
    cin>>n;

    cout<<p(n)%(1000000007);
    return 0;
}