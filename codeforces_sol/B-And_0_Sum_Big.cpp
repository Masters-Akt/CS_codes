#include <bits/stdc++.h>
using namespace std;
#define int long long
int mod = 1e9+7;

void akt(){
    int n,k;
    cin>>n>>k;
    int res = 1;
    for(int i=0;i<k;i++){
        res=((res%mod)*(n%mod))%mod;
    }
    cout<<res%mod<<"\n";
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    akt();
	}
}
