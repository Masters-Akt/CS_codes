#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    char temp = s[n-1];
	    bool ch = false;
	    for(int i=0;i<n-1;i++){
	        if(s[i]==temp){
	            ch = true;
	            break;
	        }
	    }
	    if(ch) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	}
	return 0;
}
