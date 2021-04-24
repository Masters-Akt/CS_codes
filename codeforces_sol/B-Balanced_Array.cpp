#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    if((n/2)%2==1) cout<<"NO\n";
    else{
        cout<<"YES\n";
        int sum=0;
        for(int i=1;i<=n/2;i++){
            cout<<i*2<<" ";
            sum+=(i*2);
        }
        int j=1;
        for(int i=(n/2)+1;i<n;i++){
            cout<<j<<" ";
            sum-=j;
            j+=2;
        }
        cout<<sum<<"\n";
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
