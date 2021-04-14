#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	int y=0;
	while(a<=b){
	    a*=3;
	    b*=2;
	    y++;
	}
	cout<<y;
	return 0;
}
