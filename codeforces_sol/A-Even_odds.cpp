#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int n,k;
	cin>>n>>k;
	if(n%2==0){
	if(k<=n/2){
	    cout<<k*2-1;
	}else{
	    cout<<(k-((n+1)/2))*2;
	}
	}else{
	  if(k<=n/2+1){
	    cout<<k*2-1;
	}else{
	    cout<<(k-((n+1)/2))*2;
	}  
	}
	return 0;
}
