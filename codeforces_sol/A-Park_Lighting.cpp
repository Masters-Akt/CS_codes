#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n,m;
    cin>>n>>m;
    int c=(m/2)*n;
    if(m%2==1){
        if(n%2==1){
            c+=(n/2+1);
        }else{
            c+=(n/2);
        }
    }
    cout<<c<<"\n";
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
