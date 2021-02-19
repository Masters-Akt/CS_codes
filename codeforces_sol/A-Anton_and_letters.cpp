#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	getline(cin,s);
	int c=0;
	int a[26]={0};
	for(int i=0;i<s.length();i++){
	    if((int)s[i]>=97 && (int)s[i]<=122) a[(int)s[i]-97]++;
	}
	for(int i=0;i<26;i++){
	    if(a[i]>0) c++;
	}
	cout<<c;
	return 0;
}
