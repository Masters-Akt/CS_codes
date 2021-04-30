#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    int m=max(a,max(b,c));
    int d=(m-a)+(m-b)+(m-c);
    n-=d;
    if(n>=0){
        if(n%3==0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }else{
        cout<<"NO\n";
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
