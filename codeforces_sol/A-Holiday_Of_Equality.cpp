#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    int a[n];
    int m=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>m) m=a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=(m-a[i]);
    }
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
