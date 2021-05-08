#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long int

void akt(){
	int a,b;
    cin>>a>>b;
	int ab = a*b;
	int i=2;
	if(b==1){
		cout<<"NO\n";
		return;
	}
	cout<<"YES\n";
	cout<<a<<" "<<(a*b*2)-a<<" "<<a*b*2<<"\n";
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
