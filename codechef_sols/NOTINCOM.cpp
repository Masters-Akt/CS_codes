#include <bits/stdc++.h>
using namespace std;

bool bs(long long int a[], long long int n, long long int l, long long int r){
    if(r>=l){
        long long int mid=(l+r)/2;
        if(a[mid]==n) return true;
        if(a[mid]>n) return bs(a,n,l,mid-1);
        if(a[mid]<n) return bs(a,n,mid+1,r);
    }
    return false;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n,m;
	    cin>>n>>m;
	    long long int a[n],b[m];
	    for(int i=0;i<n;i++) cin>>a[i];
	    sort(a,a+n);
	    long long int count=0;
	    for(int i=0;i<m;i++){
	        cin>>b[i];
	        if(bs(a,b[i],0,n-1)==true) count++;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
