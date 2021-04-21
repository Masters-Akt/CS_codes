#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    int a[2*n];
    for(int i=0;i<2*n;i++){
        cin>>a[i];
    }
    int b[n]={0};
    for(int i=0;i<2*n;i++){
        if(b[a[i]-1]==0){
            cout<<a[i]<<" ";
            b[a[i]-1]=1;
        }
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
