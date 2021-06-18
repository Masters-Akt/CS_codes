#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
	cin>>n;
	if(n%2==1) cout<<"Bob\n";
	else{
		int c = 0;
		while(n%2==0){
			c++;
			n/=2;
		}
		if(n<=1){
			if(c%2==1) cout<<"Bob\n";
			else cout<<"Alice\n";
		}else cout<<"Alice\n";
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
