#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int r[n];
	    int count = 0;
	    for(int i=0;i<n;i++){
	        cin>>r[i];
	        if(r[i]==1 || r[i]==3) count++;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}