#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    int c1=0, c2=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==1) c1++;
        else c2++;
    }
    if(c2%2==0){
        if(c1%2==0) cout<<"YES\n";
        else cout<<"NO\n";
    }else{
        if(c1<2){
            cout<<"NO\n";
        }else{
            c1-=2;
            if(c1%2==0) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
}

signed main() {
	// your code goes here
	std::ios::sync_with_stdio(false);
 	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    akt();
	}
}
