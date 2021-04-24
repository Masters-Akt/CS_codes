#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    int c=0;
    int d=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==-1){
            if(d==0) c++;
            else d--;
        }
        else{
            d+=x;
        }
    }
    cout<<c;
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
