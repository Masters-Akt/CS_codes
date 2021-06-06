#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	if(a[0]<0) cout<<"NO\n";
	else{
		cout<<"YES\n";
		int si = a[n-1]+1;
		cout<<si+1<<"\n";
		for(int i=0;i<=si;i++){
			cout<<i<<" ";
		}
		cout<<"\n";
	}
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
