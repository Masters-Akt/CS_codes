#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    int a[n];
    int maxi=0, mini=0, ma=0, mi=100;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>ma){
            maxi=i;
            ma=a[i];
        }
        if(a[i]<=mi){
            mini=i;
            mi=a[i];
        }
    }
    if(maxi<mini){
        cout<<maxi+(n-1-mini);
    }else if(maxi==mini){
        cout<<0;
    }else{
        cout<<maxi+(n-1-mini)-1;
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
