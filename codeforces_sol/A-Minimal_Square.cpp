#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int a,b;
    cin>>a>>b;
    if(a<=b){
        if(2*a>=b){
            cout<<4*a*a<<"\n";
        }else{
            cout<<b*b<<"\n";
        }
    }else{
        if(2*b>=a){
            cout<<4*b*b<<"\n";
        }else{
            cout<<a*a<<"\n";
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
