#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int x;
    cin>>x;
    int res = (x%10-1)*10;
    int temp=x;
    int d=0;
    while(temp>0){
        d++;
        temp/=10;
    }
    while(d>0){
        res+=d;
        d--;
    }
    cout<<res<<"\n";
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    akt();
	}
}
