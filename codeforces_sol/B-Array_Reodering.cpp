#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
	cin>>n;
	vector<pair<int,int>> a;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		a.push_back({x%2,x});
	}
	sort(a.begin(), a.end());
	int c=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(__gcd(a[i].second, 2*a[j].second)>1) c++;
		}
	}
	cout<<c<<"\n";
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
