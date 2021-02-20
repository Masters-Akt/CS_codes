#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string host;
	cin>>host;
	string guest;
	cin>>guest;
	string jumbled_words;
	cin>>jumbled_words;
	int a[26]={0};
	for(int i=0;i<host.length();i++){
	    a[(int)host[i]-65]++;
	}
	for(int i=0;i<guest.length();i++){
	    a[(int)guest[i]-65]++;
	}
	for(int i=0;i<jumbled_words.length();i++){
	    a[(int)jumbled_words[i]-65]--;
	}
	for(int i=0;i<26;i++){
	    if(a[i]!=0){
	        cout<<"NO";
	        return 0;
	    }
	}
	cout<<"YES";
	return 0;
}
