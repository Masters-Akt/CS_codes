#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int c=0;
	for(int i=0;i<n;i++){
	    string s;
	    cin>>s;
	    if(s[0]=='T') c+=4;
	    else if(s[0]=='C') c+=6;
	    else if(s[0]=='O') c+=8;
	    else if(s[0]=='D') c+=12;
	    else c+=20;
	}
	cout<<c;
	return 0;
}
