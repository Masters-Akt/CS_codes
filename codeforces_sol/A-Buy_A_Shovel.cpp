#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int k,r;
    cin>>k>>r;
    int rem=k%10;
    for(int i=1;i<=9;i++){
        if((rem*i)%10==0 || (rem*i)%10==r){
            cout<<i;
            break;
        }
    }
}

signed main() {
	// your code goes here
	int t=1;
	//cin>>t;
	while(t--){
	    akt();
	}
}
