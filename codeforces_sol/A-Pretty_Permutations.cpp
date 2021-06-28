#include <bits/stdc++.h>
using namespace std;
#define int long long

void kumar_ankit(){
    int n;
    cin>>n;
    if(n%2==1){
        cout<<"3 1 2 ";
        n-=3;
        int i = 4;
        while(n>0){
            cout<<i+1<<" "<<i<<" ";
            i+=2;
            n-=2;
        }
    }else{
        int i = 1;
        while(n>0){
            cout<<i+1<<" "<<i<<" ";
            i+=2;
            n-=2;
        }
    }
    cout<<"\n";
}

signed main(){
    // #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif
    std::ios::sync_with_stdio(false);
 	cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	for(int test=1;test<=t;test++){
	    kumar_ankit();
	}
}
