#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int c=0;
    for(int i=0;i<d;i++){
        if((i+1)%k==0 || (i+1)%l==0 || (i+1)%m==0 || (i+1)%n==0) c++;
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
