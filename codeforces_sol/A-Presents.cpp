#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    int p[n];
    int a[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
        a[p[i]-1]=i+1;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
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
