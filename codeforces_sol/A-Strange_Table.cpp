#include <bits/stdc++.h>
using namespace std;
#define int unsigned long long

void akt(){
    int n,m,x;
    cin>>n>>m>>x;
    int a = x-(x/n)*n;
    int b = x/n;
    if(a==0){
        b--;
        a=n;
    }
    //cout<<a<<" "<<b<<"\n";
    cout<<(a-1)*m+b+1<<"\n";
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
