#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int m256 = min(k2, min(k5,k6));
    int sum=m256*256;
    k2-=m256;
    sum+=(32*(min(k2,k3)));
    cout<<sum;
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
