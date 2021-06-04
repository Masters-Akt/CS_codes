#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    string s;
	cin>>s;
	int c = 1;
	vector<int> temp(s.size());
	temp[0]=0;
	vector<int> backzero(s.size(), -1);
	vector<int> backone(s.size(), -1);
	for(int i=0;i<s.size();i++){
		if(s[i]=='0'){
			backzero[i] = i;
		}else{
			if(i>0){
				backzero[i] = backzero[i-1];
			}
		}
		if(s[i]=='1'){
			backone[i] = i;
		}else{
			if(i>0){
				backone[i] = backone[i-1];
			}
		}
	}
	for(int i=1;i<s.size();i++){
		if(s[i]=='?') temp[i] = temp[i-1];
		else if(s[i]=='1'){
			if(backzero[i-1]==backone[i-1]) temp[i] = 0;
			else if(backzero[i-1]>backone[i-1]){
				int te = backzero[i-1];
				if((te&1)!=(i&1)) temp[i] = temp[te];
				else temp[i] = te+1;
			}else{
				int te = backone[i-1];
				if((te&1) == (i&1)) temp[i] = temp[te];
				else temp[i] = te+1;
			}
		}else{
			if(backzero[i-1]==backone[i-1]) temp[i] = 0;
			else if(backzero[i-1]>backone[i-1]){
				int te = backzero[i-1];
				if((te&1)==(i&1)) temp[i] = temp[te];
				else temp[i] = te+1;
			}else{
				int te = backone[i-1];
				if((te&1)!=(i&1)) temp[i] = temp[te];
				else temp[i] = te+1;
			}
		}
		c+=(i+1-temp[i]);
	}
	cout<<c<<"\n";
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
