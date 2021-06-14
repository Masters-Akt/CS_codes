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
	if(n==1){
		cout<<a[0]<<"\n";
		return;
	}
	int res = 0;
	for(int i=0;i<n;i++){
		if(!i){
			res+=a[i];
		}else{
			res+=abs(a[i]-a[i-1]);
		}
	}
	res+=a[n-1];
	for(int i=0;i<n;i++){
		if(i==0){
			res-=max(0ll,a[i]-a[i+1]);
		}else if(i<n-1){
			res-=max(0ll,a[i]-max(a[i-1], a[i+1]));
		}else{
			res-=max(0ll, a[i]-a[i-1]);
		}
	}
	cout<<res<<"\n";

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
