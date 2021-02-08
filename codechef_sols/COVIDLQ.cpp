#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    int start;
	    for(int i=0;i<n;i++){
	        if(a[i]==1){
	            start=i;
	            break;
	        }
	    }
	    bool check=true;
	    int c0=0;
	    for(int i=start+1;i<n;i++){
	        if(a[i]==0){
	            c0++;
	        }
	        else{
	            if(c0<5){
	                check=false;
	                break;
	            }
	            c0=0;
	        }
	    }
	    if(check==true){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
