#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int m=1, s=1;
	for(int i=1;i<n;i++){
	    if(a[i]>=a[i-1]){
	        s++;
	    }else{
	        if(s>m) m=s;
	        s=1;
	    }
	}
	if(s>m) m=s;
	cout<<m;
	return 0;
}
