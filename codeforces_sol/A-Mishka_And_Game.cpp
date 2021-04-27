#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    int m=0, c=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a>b) m++;
        else if(a<b) c++;
    }
    if(m>c) cout<<"Mishka";
    else if(m<c) cout<<"Chris";
    else cout<<"Friendship is magic!^^";
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
