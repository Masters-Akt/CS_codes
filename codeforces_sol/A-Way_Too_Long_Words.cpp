//Kumar Ankit
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    string s;
	    cin>>s;
	    if(s.length()<=10) cout<<s<<"\n";
	    else{
	        string ans = ""; 
	        ans = ans + s[0] + to_string(s.length()-2) + s[s.length()-1];
	        cout<<ans<<"\n";
	    }
	}
	return 0;
}