#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    sort(a, a+n);
	    int m = INT_MAX;
	    for(int i=1;i<n;i++){
	        m=min(m, a[i]-a[i-1]);
	        if(m==0) break;
	    }
	    cout<<m<<"\n";
	}
	return 0;
}
