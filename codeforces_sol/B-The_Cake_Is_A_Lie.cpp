#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n,m,k;
    cin>>n>>m>>k;
    int c1 = (m-1)+(n-1)*(m);
    int c2 = (n-1)+(m-1)*(n);
    //cout<<c1<<" "<<c2<<"\n";
    if(c1>=c2){
        if(k>=c2 && k<=c1) cout<<"YES\n";
        else cout<<"NO\n";
    }else{
        if(k>=c1 && k<=c2) cout<<"YES\n";
        else cout<<"NO\n";
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
