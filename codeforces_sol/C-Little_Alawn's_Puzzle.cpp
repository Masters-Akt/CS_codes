#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> temp(4e5+10, 1);
const int mod = 1e9+7;

void dfs(int i, vector<vector<int>> & g, vector<int> & v){
	v[i] = 1;
	for(auto x:g[i]){
		if(!v[x]) dfs(x,g,v);
	}
}

void akt(){
    int n;
	cin>>n;
	vector<vector<int>> g(n);
	vector<int> v1(n);
	vector<int> v2(n);
	for(int i=0;i<n;i++){
		cin>>v1[i];
		v1[i]--;
	}
	for(int i=0;i<n;i++){
		cin>>v2[i];
		v2[i]--;
		g[v1[i]].push_back(v2[i]);
		g[v2[i]].push_back(v1[i]);
	}
	vector<int> tempv(n,0);
	int res=0;
	for(int i=0;i<n;i++){
		if(!tempv[i]){
			res++;
			dfs(i,g,tempv);
		}
	}
	cout<<temp[res]<<"\n";
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
	for(int i=1;i<4e5+10;i++){
		temp[i] = (temp[i-1]*2)%mod;
	}
	for(int test=1;test<=t;test++){
	    akt();
	}
}
