#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n,m;
	cin>>n>>m;
	char a[n][m];
	char b[n][m];
	char c[n][m];
	bool c1 = true, c2 = true;
	bool ch = true;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
			if(ch){
				b[i][j] = 'R';
				c[i][j] = 'W';
				ch = false;
			}else{
				b[i][j] = 'W';
				c[i][j] = 'R';
				ch = true;
			}
			if(a[i][j]!='.'){
				if(a[i][j]!=b[i][j]) c1 = false;
				if(a[i][j]!=c[i][j]) c2 = false;
			} 
			//cout<<c1<<" "<<c2<<"\n";
		}
		if(m%2==0){
			if(ch) ch = false;
			else ch = true;
		}
	}
	//cout<<c1<<" "<<c2<<"\n";
	if(!c1 && !c2){
		cout<<"NO\n";
	}else if(c1){
		cout<<"YES\n";
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<b[i][j];
			}
			cout<<"\n";
		}
	}else{
		cout<<"YES\n";
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<c[i][j];
			}
			cout<<"\n";
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
