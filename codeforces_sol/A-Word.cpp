#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int u=0, l=0;
	for(int i=0;i<s.length();i++){
	    if((int)s[i]>=65 && (int)s[i]<=90) u++;
	    else l++;
	}
	if(u<=l){
	    string ans="";
	    for(int i=0;i<s.length();i++){
	        if((int)s[i]>=65 && (int)s[i]<=90){
	            ans=ans+(char)((int)s[i]+32);
	        }else{
	            ans = ans+s[i];
	        }
	    }
	    cout<<ans;
	}else{
	    string ans;
	    for(int i=0;i<s.length();i++){
	        if((int)s[i]>=65 && (int)s[i]<=90){
	            ans=ans+s[i];
	        }else{
	            ans=ans+(char)((int)s[i]-32);
	        }
	    }
	    cout<<ans;
	}
	return 0;
}
