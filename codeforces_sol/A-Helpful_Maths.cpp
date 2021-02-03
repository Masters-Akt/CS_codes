#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	int one=0, two=0, three=0;
	for(int i=0;i<s.length();i+=2){
	    if(s[i]=='1') one++;
	    else if(s[i]=='2') two++;
	    else three++;
	}
	string ans="";
	if(one==0){
	    if(two==0){
	        ans=ans+"3";
	        three--;
	    }else{
	        ans=ans+"2";
	        two--;
	    }
	}else{
	    ans = ans+"1";
	    one--;
	}
	while(one-->0){
	    ans=ans+"+1";
	}
	while(two-->0){
	    ans=ans+"+2";
	}
	while(three-->0){
	    ans=ans+"+3";
	}
	cout<<ans;
	return 0;
}
