#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool ch[26]={false};
    bool ch2=false;
    for(int i=0;i<n;i++){
        if(i==0)
        ch[(int)s[i]-65]=true;
        else{
            if(s[i]!=s[i-1]){
                if(ch[(int)s[i]-65]){
                    ch2=true;
                    break;
                }else{
                    ch[(int)s[i]-65]=true;
                }
            }
        }
    }
    if(ch2) cout<<"NO\n";
    else cout<<"YES\n";
}

signed main(){
    // #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
    std::ios::sync_with_stdio(false);
 	cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	for(int test=1;test<=t;test++){
	    akt();
	}
}
