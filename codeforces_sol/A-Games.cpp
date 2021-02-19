#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	int b[101]={0};
	int c=0;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    int x;
	    cin>>x;
	    b[x]++;
	}
	for(int i=0;i<n;i++){
	    //cout<<a[i]<<" "<<b[a[i]]<<"\n";
	    c+=(b[a[i]]);
	}
	cout<<c;
	return 0;
}
