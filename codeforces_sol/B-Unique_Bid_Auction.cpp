#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    int a[n]={0};
    int b[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
        a[b[i]-1]++;
    }
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<"\n";
    bool ch = true;
    for(int i=0;i<n;i++){
        if(a[i]==1){
            ch = false;
            for(int j=0;j<n;j++){
                if(b[j]==i+1){
                    cout<<j+1<<"\n";
                    break;
                }
            }
            break;
        }
    }
    if(ch) cout<<"-1\n";
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
