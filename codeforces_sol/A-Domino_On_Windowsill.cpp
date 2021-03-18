#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k1,k2;
	    cin>>n>>k1>>k2;
	    int w,b;
	    cin>>w>>b;
	    if(n==1){
	        if(k1==0 && k2==0 ){
	            if(w==0 && b<=1){
	                cout<<"YES\n";
	            }else{
	                cout<<"NO\n";
	            }
	        }else if(k1==0 && k2==1){
	            if(w==0 && b==0){
	                cout<<"YES\n";
	            }else{
	                cout<<"NO\n";
	            }
	        }else if(k1==1 && k2==0){
	            if(w==0 && b==0){
	                cout<<"YES\n";
	            }else{
	                cout<<"NO\n";
	            }
	        }else{
	            if(b==0 && w<=1){
	                cout<<"YES\n";
	            }else{
	                cout<<"NO\n";
	            }
	        }
	        continue;
	    }
	    if(k1==0 && k2==0){
	        if(w==0 && b<=n){
	            cout<<"YES\n";
	        }else{
	            cout<<"NO\n";
	        }
	        continue;
	    }
	    if(k1==n && k2==n){
	        if(b==0 && w<=n){
	            cout<<"YES\n";
	        }else{
	            cout<<"NO\n";
	        }
	        continue;
	    }
	    if(w==0 && b==0){
	        cout<<"YES\n";
	        continue;
	    }
	    if(k1==k2){
	        if(w<=k1 && b<=n-k1){
	            cout<<"YES\n";
	        }else{
	            cout<<"NO\n";
	        }
	        continue;
	    }
	    if(k1>k2){
	        if(w<=k2){
	            w=0;
	        }else{
	            w=w-k2;
	        }
	        if(b<=n-k1){
	            b=0;
	        }else{
	            b=b-(n-k1);
	        }
	        if(b==0 && w==0){
	            cout<<"YES\n";
	            continue;
	        }
	        if(k1-k2>=2*w && k1-k2>=2*b){
	            cout<<"YES\n";
	        }else{
	            cout<<"NO\n";
	        }
	        continue;
	    }
	    if(k1<k2){
	        if(w<=k1){
	            w=0;
	        }else{
	            w=w-k1;
	        }
	        if(b<=n-k2){
	            b=0;
	        }else{
	            b=b-(n-k2);
	        }
	        if(b==0 && w==0){
	            cout<<"YES\n";
	            continue;
	        }
	        if(k2-k1>=2*w && k2-k1>=2*b){
	            cout<<"YES\n";
	        }else{
	            cout<<"NO\n";
	        }
	        continue;
	    }
	}
	return 0;
}
