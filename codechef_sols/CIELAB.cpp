#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	int d = a-b;
	if(d%10==9){
	    d--;
	}else{
	    d++;
	}
	cout<<d;
	return 0;
}
