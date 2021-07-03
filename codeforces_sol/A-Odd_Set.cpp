#include <bits/stdc++.h>
using namespace std;
#define int long long

void kumar_ankit(){
    int n;
	cin>>n;
	int c=0;
	for(int i=0;i<2*n;i++){
		int x;
		cin>>x;
		if(x&1) c++;
	}
	if(c==n) cout<<"YES\n";
	else cout<<"NO\n";
}

signed main(){
    // #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
    std::ios::sync_with_stdio(false);
 	cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	for(int test=1;test<=t;test++){
	    kumar_ankit();
	}
}
