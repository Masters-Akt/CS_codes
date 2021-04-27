#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0,c=0,total=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='x') c++;
        else{
            x=max(x,c);
            if(x>2){
                total+=(x-2);
            }
            x=0;
            c=0;
        }
    }
    x=max(x,c);
    if(x>2) total+=(x-2);
    cout<<total;
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
