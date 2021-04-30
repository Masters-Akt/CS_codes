#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"0\n";
    }else if(a<b){
        if((b-a)%2==0){
            cout<<"2\n";
        }else{
            cout<<"1\n";
        }
    }else{
        if((a-b)%2==0){
            cout<<"1\n";
        }else{
            cout<<"2\n";
        }
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
