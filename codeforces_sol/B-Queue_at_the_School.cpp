#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, t;
	cin>>n>>t;
	string s;
	cin>>s;
	char a[n];
	for(int i=0;i<n;i++) a[i]=s[i];
	while(t--){
	    for(int i=1;i<n;i++){
	        if(a[i]=='G'){
	            if(a[i-1]=='B'){
	                char temp = a[i];
	                a[i]=a[i-1];
	                a[i-1]=temp;
	                i++;
	            }
	        }
	    }
	}
	for(int i=0;i<n;i++){
	    cout<<a[i];
	}
	return 0;
}
