#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n,m;
    cin>>n>>m;
    bool ch = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char x;
            cin>>x;
            if(x=='C'||x=='M'||x=='Y'){
                ch=false;
            }
        }
    }
    if(ch) cout<<"#Black&White";
    else cout<<"#Color";
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
