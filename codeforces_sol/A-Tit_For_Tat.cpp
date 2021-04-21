#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0, j=n-1;
    while(k--){
        while(a[i]==0){
            i++;
        }
        if(i>=n) break;
        a[i]--;
        a[j]++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    akt();
	}
}
