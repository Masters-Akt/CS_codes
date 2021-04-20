#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    vector<int> v;
    int temp=1;
    for(int i=1;i<n;i++){
        if(n!=2 && i==n-1 && temp==1) continue;
        if(__gcd(i,n)==1){
            v.push_back(i);
            temp=temp*i%n;
        }
    }
    cout<<v.size()<<"\n";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<"\n";
}

signed main() {
	// your code goes here
	int t=1;
	//cin>>t;
	while(t--){
	    akt();
	}
}
