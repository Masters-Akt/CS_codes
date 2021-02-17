#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int c=1;
	string s;
	cin>>s;
	for(int i=1;i<n;i++){
	    string y;
	    cin>>y;
	    if(s[0]!=y[0]){
	        c++;
	        s = y;
	    }
	}
	cout<<c;
	return 0;
}
