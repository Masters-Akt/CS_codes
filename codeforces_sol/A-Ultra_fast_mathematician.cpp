#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string a,b;
	cin>>a;
	cin>>b;
	string ans = "";
	for(int i=0;i<a.length();i++){
	    if(a[i]==b[i]) ans = ans+"0";
	    else ans = ans+"1";
	}
	cout<<ans;
	return 0;
}
