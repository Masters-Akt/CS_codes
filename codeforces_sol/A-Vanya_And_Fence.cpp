#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,h;
	cin>>n>>h;
	int a[n];
	int c=0;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    if(a[i]<=h) c++;
	    else c+=2;
	}
	cout<<c;
	return 0;
}
