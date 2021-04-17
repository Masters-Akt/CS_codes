#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	long long int a, b;
	cin>>a>>b;
	int d = abs(a-b);
	if(d%10==0) cout<<d/10;
	else cout<<d/10+1;
	cout<<"\n";
	}
	return 0;
}
