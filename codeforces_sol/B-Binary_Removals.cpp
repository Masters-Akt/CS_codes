#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n1=0, n0=0, temp1=0, temp2=0;
	    for(int i=0;i<s.length();i++){
	        n1=(s[i]=='1');
	        n0=(s[i]=='0');
	        if(temp1<2){
	            temp1 = (temp1&&n1)+n1;
	        }else if(temp2<2){
	            temp2 = (temp2&&n0)+n0;
	        }else break;
	    }
	    if(temp1>=2 && temp2>=2) cout<<"NO\n";
	    else cout<<"YES\n";
	}
	return 0;
}
