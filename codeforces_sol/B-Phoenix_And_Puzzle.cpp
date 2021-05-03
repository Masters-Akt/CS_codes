#include <bits/stdc++.h>
using namespace std;
#define int long long

bool ps(int x){
    if (x >= 0) {
        int sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}


void akt(){
    int n;
	cin>>n;
	if(n%2==1) cout<<"NO\n";
	else{
		bool ch = false;
		if(n%4==0){
			int temp=n/4;
			if(ps(temp)) ch = true;
		}
		if(!ch){
			n/=2;
			if(ps(n)) ch=true;
		}
		if(ch) cout<<"YES\n";
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
		//cout<<"Case #"<<test<<": ";
	    akt();
		//cout<<"\n";
	}
}
