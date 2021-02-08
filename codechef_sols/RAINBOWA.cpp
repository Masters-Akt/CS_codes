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
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    if(a[0]!=1){
	        cout<<"no\n";
	    }
	    else{
	        int l=0,h=n-1;
	        while(l<h){
	            if(a[l]!=a[h] || (a[l]>7 || a[h]>7) || (a[l+1]-a[l]>1 || a[l+1]-a[l]<0) ||(a[l]<1|| a[h]<1))
	            break;
	        
	        l++;
	        h--;}
	        if(l<h || a[l]!=7){
	        cout<<"no\n";
	    }
	    else{
	        cout<<"yes\n";
	    }
	    }
	    
	}
	return 0;
}
