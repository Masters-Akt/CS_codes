#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	string s;
	cin>>s;
	int c=0;
	for(int i=1;i<n;i++){
	    if(s[i]==s[i-1]) c++;
	}
	cout<<c;
	return 0;
}
