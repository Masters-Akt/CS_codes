#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int t=0, m=0, ma=0;
    for(int i=0;i<n;i++){
        if(s[i]=='T') t++;
        else m++;
    }
    if(t!=2*m){
        cout<<"NO\n";
        return;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='T'){
            t++;
            ma++;
        }else{
            ma--;
            if(ma<0){
                cout<<"NO\n";
                return;
            }
        }
    }
    t=0;
    ma=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='T'){
            t++;
            ma++;
        }else{
            ma--;
            if(ma<0){
                cout<<"NO\n";
                return;
            }
        }
    }
    cout<<"YES\n";
    return;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
