#include <bits/stdc++.h>
using namespace std;

void akt(){
    int k;
    cin>>k;
    int g = __gcd(100,k);
    cout<<100/g<<"\n";
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
