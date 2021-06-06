#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
	cin>>n;
	string s;
	cin>>s;
	int a[26]={0};
	for(int i=0;i<n;i++){
		a[(int)s[i]-97]++;
	}
	bool ch = false;
	for(int i=0;i<26;i++){
		if(a[i]==0){
			ch = true;
			cout<<(char)(i+97)<<"\n";
			break;
		}
	}
	if(!ch){
		int b[26][26]={0};
		for(int i=0;i<n-1;i++){
			b[(int)s[i]-97][(int)s[i+1]-97]++;
		}
		bool ch1 = false;
		for(int i=0;i<26;i++){
			for(int j=0;j<26;j++){
				if(b[i][j]==0){
					ch1 = true;
					cout<<(char)(i+97)<<(char)(j+97)<<"\n";
					break;
				}
				if(ch1) break;
			}
			if(ch1) break;
		}
		if(!ch1){
			int c[26][26][26]={0};
			for(int i=0;i<n-2;i++){
				c[(int)s[i]-97][(int)s[i+1]-97][(int)s[i+2]-97]++;
			}
			bool ch2=true;
			for(int i=0;i<26;i++){
				for(int j=0;j<26;j++){
					for(int k=0;k<26;k++){
						if(c[i][j][k]==0){
							cout<<(char)(i+97)<<(char)(j+97)<<(char)(k+97)<<"\n";
							ch2 = false;
							break;
						}
						if(!ch2) break;
					}
					if(!ch2) break;
				}
				if(!ch2) break;
			}
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
