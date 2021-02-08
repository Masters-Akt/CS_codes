#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long int x = 0;
	    while(n>0){
	        x+=(n*n);
	        n-=2;
	    }
	    cout<<x<<endl;
	}
	return 0;
}
