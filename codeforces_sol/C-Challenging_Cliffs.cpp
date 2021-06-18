#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
	cin>>n;
	int h[n];
	for(int i=0;i<n;i++){
		cin>>h[i];
	}
	sort(h, h+n);
	int ind1=0, ind2=0;
	int d = INT_MAX;
	for(int i=1;i<n;i++){
		if(h[i]-h[i-1]<d){
			d = h[i]-h[i-1];
			ind1 = i-1;
			ind2 = i;
		}
	}
	cout<<h[ind1]<<" ";
	for(int i=ind2+1;i<n;i++){
		cout<<h[i]<<" ";
	}
	for(int i=0;i<ind1;i++){
		cout<<h[i]<<" ";
	}
	cout<<h[ind2]<<"\n";
	
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
