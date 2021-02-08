#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    long long int d=0;
	    for(long long int i=0;i<n/2;i++){
	        d+=abs(a[i]-a[n-1-i]);
	    }
	    cout<<d<<"\n";
	}
	return 0;
}
