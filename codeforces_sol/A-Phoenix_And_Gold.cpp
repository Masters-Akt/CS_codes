#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n,x;
	cin>>n>>x;
	int w[n];
	for(int i=0;i<n;i++){
		cin>>w[i];
	}
	int sum=0;
	vector<int> v;
	vector<int> v2;
	for(int i=0;i<n;i++){
		sum+=w[i];
		if(sum==x){
			sum-=w[i];
			v.push_back(w[i]);
		}else{
			v2.push_back(w[i]);
		}
	}
	// for(int i=0;i<v.size();i++){
	// 	cout<<v[i]<<" ";
	// }
	// cout<<"sep ";
	// for(int i=0;i<v2.size();i++){
	// 	cout<<v2[i]<<" ";
	// }
	// cout<<"\n";
	// cout<<sum<<" = sum\n";
	bool ch = true;
	if(sum<x){
		
		if(v.size()!=0){
			
			int d=x-sum;
			//cout<<"d = "<<d<<"\n";
			bool ch2=false;
			for(int i=0;i<v.size();i++){
				
				if(v[i]!=d){
					//cout<<"here\n";
					int temp=v[i];
					v.erase(v.begin()+i);
					v2.push_back(temp);
					ch2 = true;
					break;
				}
			}
			if(ch2==false){
				ch=false;
			}
		}
	}
	// for(int i=0;i<v.size();i++){
	// 	cout<<v[i]<<" ";
	// }
	// cout<<"sep ";
	// for(int i=0;i<v2.size();i++){
	// 	cout<<v2[i]<<" ";
	// }
	// cout<<"\n";
	if(!ch){
		cout<<"NO\n";
	}else{
		cout<<"YES\n";
		for(int i=0;i<v2.size();i++){
			cout<<v2[i]<<" ";
		}
		if(v.size()!=0){
		for(int i=0;i<v.size();i++){
			cout<<v[i]<<" ";
		}}
		cout<<"\n";

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
