#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int x[3];
    for(int i=0;i<3;i++) cin>>x[i];
    sort(x,x+3);
    cout<<x[2]-x[0];
}

signed main() {
	// your code goes here
	std::ios::sync_with_stdio(false);
 	cin.tie(NULL);
	int t=1;
	//cin>>t;
	while(t--){
	    akt();
	}
}
