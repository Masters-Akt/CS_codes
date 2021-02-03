#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int m,n;
	cin>>m>>n;
	int ans=0;
	if(m%2==0){
	   ans=n*(m/2);
	}else{
	    if(n%2==0){
	        ans=n*(m/2)+n/2;
	    }else{
	        ans=(n)*(m/2)+n/2;
	    }
	}
	cout<<ans;
	return 0;
}
