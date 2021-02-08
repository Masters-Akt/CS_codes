#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int l[n], r[n];
	    for(int i=0;i<n;i++){
	        cin>>l[i];
	    }
	    for(int i=0;i<n;i++){
	        cin>>r[i];
	    }
	    int lr[n], m=0, index, r_store;
	    for(int i=0;i<n;i++){
	        lr[i] = l[i]*r[i];
	        if(lr[i]>m){
	            m=lr[i];
	            index = i+1;
	            r_store = r[i];
	        }else if(lr[i]==m){
	            if(r[i]>r_store){
	                index = i+1;
	                r_store = r[i];
	            }
	        }
	    }
	    cout<<index<<endl;
	}
	return 0;
}
