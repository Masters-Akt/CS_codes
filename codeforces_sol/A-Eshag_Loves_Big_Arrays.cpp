#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	int m = INT_MAX;
	for(int i=0;i<n;i++){
		m=min(m,a[i]);
	}
	int c=0;
	for(int i=0;i<n;i++){
		if(a[i]==m) c++;
	}
	cout<<n-c<<"\n";
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
