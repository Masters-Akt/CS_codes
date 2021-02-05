#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int n;
	cin>>n;
	long long int c=0;
	while(n>0){
	    if(n%10==4||n%10==7) c++;
	    n=n/10;
	}
	if(c==0){
	    cout<<"NO";
	    return 0;
	}
	while(c>0){
	    if(c%10==4 || c%10==7){
	        c/=10;
	        continue;
	    }
	    cout<<"NO";
	    return 0;
	}
	cout<<"YES";
	return 0;
}
