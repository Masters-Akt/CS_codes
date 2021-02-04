#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int i=0;
	string a = "hello";
	for(int j=0;j<s.length();j++){
	    if(s[j]==a[i]){
	        i++;
	    }
	    if(i==5) break;
	}
	if(i==5) cout<<"YES";
	else cout<<"NO";
	return 0;
}
