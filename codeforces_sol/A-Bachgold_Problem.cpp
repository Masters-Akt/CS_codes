#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<"\n";
        int d = n/2;
        while(d--){
            cout<<"2 ";
        }
        cout<<"\n";
    }else{
        n=n-3;
        cout<<n/2+1<<"\n";
        int d = n/2;
        while(d--){
            cout<<"2 ";
        }
        cout<<"3\n";
    }
}

signed main() {
	// your code goes here
	int t=1;
	//cin>>t;
	while(t--){
	    akt();
	}
}
