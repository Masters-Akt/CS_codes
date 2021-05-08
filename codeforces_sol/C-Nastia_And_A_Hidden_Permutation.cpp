#include <bits/stdc++.h>
using namespace std;
#define int long long

int findind(int n){
	for(int i=0;i<n-1;i+=2){
		cout<<"? 1 "<<i+1<<" "<<i+2<<" "<<n-1<<"\n";
		cout.flush();
		int var;
		cin>>var;
		if(var==n){
			return i+1;
		}
		if(var==n-1){
			cout<<"? 1 "<<i+2<<" "<<i+1<<" "<<n-1<<"\n";
			cout.flush();
			cin>>var;
			if(var==n){
				return i;
			}
		}
	}
	return n-1;
}

void akt(){
    int n;
	cin>>n;
	int a[n];
	int ind = findind(n);
	a[ind] = n;
	for(int i=0;i<n;i++){
		if(i==ind){
			continue;
		}
		cout<<"? 2 "<<i+1<<" "<<ind+1<<" "<<1<<"\n";
		cout.flush();
		cin>>a[i];
	}
	cout<<"! ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
	cout.flush();
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
