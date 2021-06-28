#include <bits/stdc++.h>
using namespace std;
#define int long long

void kumar_ankit(){
    int n;
	cin>>n;
	int d[n];
	for(int i=0;i<n;i++){
		cin>>d[i];
	}
	if(n==1){
		cout<<0<<"\n";
		return;
	}
	sort(d,d+n);
	int cost = 0;
	int prevsum=0;
	for(int i=0;i<n;i++){
		if(i>1){
			prevsum+=d[i-2];
			cost+=(d[i]+prevsum-d[i]*i);
		}
	}
	cout<<cost<<"\n";
}

signed main(){
//     #ifndef ONLINE_JUDGE
// 		freopen("input.txt", "r", stdin);
// 		freopen("output.txt", "w", stdout);
// 	#endif
    std::ios::sync_with_stdio(false);
 	cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	for(int test=1;test<=t;test++){
	    kumar_ankit();
	}
}
