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
	    long long int f=0, s=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a, a+n, greater<int>());
	    for(int i=0;i<n;i++){
	        if(i==0){
	            f+=a[i];
	        }else if(i==1 || i==2){
	            s+=a[i];
	        }else{
	            if(i%2==0){
	                s+=a[i];
	            }else{
	                f+=a[i];
	            }
	        }
	    }
	    if(f>s){
	        cout<<"first\n";
	    }else if(f<s){
	        cout<<"second\n";
	    }else{
	        cout<<"draw\n";
	    }
	}
	return 0;
}
