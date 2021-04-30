#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n,m;
    cin>>n>>m;
    if(n==1) cout<<"0\n";
    else if(n==2) cout<<m<<"\n";
    else cout<<2*m<<"\n";
}

signed main() {
	// your code goes here
	std::ios::sync_with_stdio(false);
 	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    akt();
	}
}
