#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    string s;
    cin>>s;
    string ans ="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='.'){
            ans=ans+"0";
        }else{
            i++;
            if(s[i]=='.'){
                ans=ans+"1";
            }else{
                ans=ans+"2";
            }
        }
    }
    cout<<ans;
}

signed main() {
	// your code goes here
	std::ios::sync_with_stdio(false);
 	cin.tie(NULL);
	int t=1;
	//cin>>t;
	while(t--){
	    akt();
	}
}
