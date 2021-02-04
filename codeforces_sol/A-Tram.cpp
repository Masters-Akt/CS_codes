#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int in=0, m=0;
	while(n-->0){
	    int a, b;
	    cin>>a>>b;
	    in=in-a+b;
	    if(in>m) m=in;
	}
	cout<<m;
	return 0;
}
