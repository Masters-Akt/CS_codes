#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	bool check[100001]={false};
	for(int i=1;i<=100;i++){
	    check[i*i]=true;
	}
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    bool ch = false;
	    for(int i=0;i<n;i++){
	        if(!check[a[i]]) ch=true;
	    }
	    if(ch) cout<<"YES\n";
	    else cout<<"NO\n";
	}
	return 0;
}
