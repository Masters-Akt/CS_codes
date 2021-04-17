#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int x1,x2,x3,x4;
	cin>>x1>>x2>>x3>>x4;
	long long int m=max(x1,max(x2,max(x3,x4)));
	if(x1!=m) cout<<m-x1<<" ";
	if(x2!=m) cout<<m-x2<<" ";
	if(x3!=m) cout<<m-x3<<" ";
	if(x4!=m) cout<<m-x4<<" ";
	return 0;
}
