#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n,k;
    cin>>n>>k;
    int rem = 240-k;
    int c=0;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=(i*5);
        if(sum<=rem){
            c++;
        }else break;
    }
    cout<<c;
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
