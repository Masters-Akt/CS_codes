#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int n;
	cin>>n;
	int c=0;
	c+=(n/100);
	n-=((n/100)*100);
	c+=(n/20);
	n-=((n/20)*20);
	c+=(n/10);
	n-=((n/10)*10);
	c+=(n/5);
	n-=((n/5)*5);
	c+=n;
	cout<<c;
	return 0;
}
