#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    int j=1;
    int sum=0;
    while(sum<n){
        sum+=((j*(j+1))/2);
        j++;
    }
    if(sum==n) cout<<j-1;
    else cout<<j-2;
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
