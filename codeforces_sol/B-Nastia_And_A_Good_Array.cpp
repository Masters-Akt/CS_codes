#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
	cin>>n;
	int a[n];
	int m = INT_MAX, minind=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<m){
			minind = i;
			m=a[i];
		}
	}
	cout<<n-1<<"\n";
	bool ch = true;
	for(int i=minind-1;i>=0;i--){
		cout<<i+1<<" "<<minind+1<<" ";
		if(ch){
			cout<<a[minind]+1<<" ";
			a[i]=a[minind]+1;
			ch=false;
		}else{
			cout<<a[minind]<<" ";
			a[i]=a[minind];
			ch=true;
		}
		cout<<a[minind]<<"\n";
	}
	ch = true;
	for(int i=minind+1;i<n;i++){
		cout<<i+1<<" "<<minind+1<<" ";
		if(ch){
			cout<<a[minind]+1<<" ";
			//a[i]=a[minind]+1;
			ch=false;
		}else{
			cout<<a[minind]<<" ";
			//a[i]=a[minind];
			ch=true;
		}
		cout<<a[minind]<<"\n";
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
