#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int n;
	cin>>n;
	if(n%2==0){
	    cout<<n/2;
	}else{
	    cout<<(-1)*((n+1)/2);
	}
	return 0;
}