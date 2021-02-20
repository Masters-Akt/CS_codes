#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b;
	cin>>a>>b;
	if(a<=b){
	    cout<<a<<" ";
	    b=b-a;
	    cout<<b/2<<"\n";
	}else{
	    cout<<b<<" ";
	    a=a-b;
	    cout<<a/2<<"\n";
	}
	return 0;
}
