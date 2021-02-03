#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	string ans="";
	if((int)s[0]>=97&&(int)s[0]<=122){
	    ans=ans+""+(char)((int)s[0]-32)+s.substr(1,s.length()-1);
	    cout<<ans;
	}else cout<<s;
	return 0;
}
