#include <bits/stdc++.h>
using namespace std;
//#define int long long

void akt(){
    int n;
    cin>>n;
    int a = floor(n/2);
    int b = 2*a;
    cout<<__gcd(a,b)<<"\n";
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    akt();
	}
}
