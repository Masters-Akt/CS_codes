#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n,q;
	cin>>n>>q;
	string s;
	cin>>s;
	int a[s.size()]={0};
	int sum = 0;
	for(int i=0;i<s.size();i++){
		sum+=(s[i]-'a'+1);
		a[i]=sum;
		//cout<<a[i]<<" ";
	}
	for(int i=0;i<q;i++){
		int start, end;
		cin>>start>>end;
		if(start==1){
			cout<<a[end-1]<<"\n";
		}else{
			cout<<a[end-1]-a[start-2]<<"\n";
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
	int t=1;
	//cin>>t;
	for(int test=1;test<=t;test++){
	    akt();
	}
}
