#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int startindexcheck, lastindexcheck;
    int start=0, end=n-1;
    for(int i=0;i<n;i++){
        if(s[i]=='*'){
            start=i;
            startindexcheck=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='*'){
            end=i;
            lastindexcheck=i;
            break;
        }
    }
    if(startindexcheck==lastindexcheck){
        cout<<1<<"\n";
    }else{
    int numberx = 2;
    while(end>start+k){
        if(s[start+k]=='*'){
            numberx++;
            start+=k;
        }else{
            for(int i=start+k-1;i>start;i--){
                if(s[i]=='*'){
                    numberx++;
                    start=i;
                    break;
                }
            }
        }
    }
    cout<<numberx<<"\n";
    }
}

signed main() {
	// your code goes here
	std::ios::sync_with_stdio(false);
 	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    akt();
	}
}
