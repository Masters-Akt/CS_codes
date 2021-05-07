#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"1\n";
        return;
    }
    if(n==2){
        cout<<"-1\n";
        return;
    }
    if(n==3){
        cout<<"2 9 7\n4 6 3\n1 8 5\n";
        return;
    }
    int temp=1, temp2;
    if(n%2==1){
        temp2 = (n/2+1)*n+1;
    }else{
        temp2 = (n*n)/2+1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j%2==0){
                cout<<temp++<<"\n";
            }else cout<<temp2++<<"\n";
        }
    }
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
	    akt();
	}
}
