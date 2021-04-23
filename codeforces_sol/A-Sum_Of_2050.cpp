#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    if(n%2050!=0) cout<<"-1\n";
    else{
        n/=2050;
        int r = 0;
        while(n>0){
            r+=n%10;
            n/=10;
        }
        cout<<r<<"\n";
    }
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    akt();
	}
}
