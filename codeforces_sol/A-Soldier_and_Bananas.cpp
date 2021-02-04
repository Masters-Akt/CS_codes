#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long k,n,w;
	cin>>k>>n>>w;
	long long t = ((w*(w+1))/2)*k;
	if(t<n) cout<<"0";
	else cout<<t-n;
	return 0;
}
