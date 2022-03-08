#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    string s;
	cin>>s;
	char c;
	cin>>c;
	vector<int> pos;
	for(int i=0;i<s.size();i++){
		if(s[i]==c){
			pos.push_back(i);
		}
	}
	if(pos.size()==0){
		cout<<"NO\n";
		return;
	}
	for(int i=0;i<pos.size();i++){
		if(pos[i]%2==0){
			cout<<"YES\n";
			return;
		}
	}
	cout<<"NO\n";
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
