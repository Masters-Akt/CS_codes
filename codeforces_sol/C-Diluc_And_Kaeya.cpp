#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
	cin>>n;
	string s;
	cin>>s;
	map<pair<int, int>, int> m;
	int nd=0, nk=0;
	for(auto x:s){
		if(x=='D') nd++;
		else nk++;
		int dkgcd = __gcd(nd, nk);
		int ans = m[{nd/dkgcd, nk/dkgcd}]+1;
		cout<<ans<<" ";
		m[{nd/dkgcd, nk/dkgcd}]++;
	}
	cout<<"\n";
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
	    akt();
	}
}
