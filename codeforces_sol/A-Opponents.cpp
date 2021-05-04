#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n,d;
    cin>>n>>d;
    int c=0, m=0;
    while(d--){
        string s;
        cin>>s;
        bool ch = false;
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                ch=true;
                break;
            }
        }
        if(ch){
            c++;
        }else{
            m=max(m,c);
            c=0;
        }
    }
    m=max(m,c);
    cout<<m;
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
