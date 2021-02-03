#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int c=1;
	for(int i=1;i<s.length();i++){
	    if(s[i]==s[i-1]) c++;
	    else{
	        if(c>=7){
	            cout<<"YES";
	            return 0;
	        }
	        c=1;
	    }
	}
	if(c>=7) cout<<"YES";
	else cout<<"NO";
	return 0;
}
