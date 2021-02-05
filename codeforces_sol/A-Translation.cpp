#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s,t;
	cin>>s>>t;
	reverse(t.begin(), t.end());
	if(s.compare(t)!=0) cout<<"NO";
	else cout<<"YES";
	return 0;
}
