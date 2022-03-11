#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
	cin>>n;
	int m = 1e9;
	int i=1;
	vector<int> ans(n);
	bool check = false;
	for(int j=0;j<n;j++){
		if(j==0){
			ans[j] = i;
			continue;
		}
		if(i>(m)/3){
			check = true;
			break;
		}else{
			i = 3*i;
			ans[j] = i;
		}
	}
	if(check){
		cout<<"NO\n";
	}else{
		cout<<"YES\n";
		for(int j=0;j<n;j++){
			cout<<ans[j]<<" ";
		}
		cout<<"\n";
	}
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
	    akt();
	}
}
