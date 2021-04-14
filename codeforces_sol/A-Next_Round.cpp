#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a, a+n, greater<int>());
	int res = a[k-1];
	int c=0;
	for(int i=0;i<n;i++){
	    if(a[i]!=0 && a[i]>=res) c++;
	}
	cout<<c;
	return 0;
}
