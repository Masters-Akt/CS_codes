#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,s;
	    cin>>n>>s;
	    int p[n],sa[n];
	    for(int i=0;i<n;i++){
	        cin>>p[i];
	    }
	    int s1=100,s0=100;
	    for(int i=0;i<n;i++){
	        cin>>sa[i];
	        if(sa[i]==1){
	            if(p[i]<s1){
	                s1=p[i];
	            }
	        }else{
	            if(p[i]<s0){
	                s0=p[i];
	            }
	        }
	    }
	    if(s1+s0<=100-s){
	        cout<<"yes"<<"\n";
	    }
	    else{
	        cout<<"no"<<"\n";
	    }
	}
	return 0;
}
