#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long int a[n];
	    long long int mina=INT_MAX;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        mina= min(mina, a[i]);
	    }
	    long long int b[n];
	    long long int minb=INT_MAX;
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	        minb = min(minb, b[i]);
	    }
	    long long int c=0;
	    for(int i=0;i<n;i++){
	        a[i]-=mina;
	        b[i]-=minb;
	        if(a[i]<=b[i]){
	            c+=a[i];
	            b[i]=b[i]-a[i];
	            c+=b[i];
	        }else{
	            c+=b[i];
	            a[i]=a[i]-b[i];
	            c+=a[i];
	        }
	    }
	    cout<<c<<"\n";
	}
	return 0;
}
