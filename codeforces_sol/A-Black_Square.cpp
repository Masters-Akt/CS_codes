#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int a[4];
    for(int i=0;i<4;i++) cin>>a[i];
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1') sum+=a[0];
        else if(s[i]=='2') sum+=a[1];
        else if(s[i]=='3') sum+=a[2];
        else sum+=a[3];
    }
    cout<<sum;
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
