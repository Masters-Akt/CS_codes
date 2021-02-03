#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int i=0, j=0, k=0;
	while(n-->0){
	    int x,y,z;
	    cin>>x>>y>>z;
	    i+=x;
	    j+=y;
	    k+=z;
	}
	if(i==0 && j==0 && k==0) cout<<"YES";
	else cout<<"NO";
	return 0;
}
