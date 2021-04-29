#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int r,b,d;
    cin>>r>>b>>d;
    if(d==0){
        if(r==b){
            cout<<"YES\n";
        }else cout<<"NO\n";
    }else{
        if(r<=b){
            if(r*(d+1)>=b) cout<<"YES\n";
            else cout<<"NO\n";
        }else{
            if(b*(d+1)>=r) cout<<"YES\n";
            else cout<<"NO\n";
        }
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
