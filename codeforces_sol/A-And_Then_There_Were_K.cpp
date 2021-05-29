#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		long long int ms = -1;
		for(int i=45;i>=0;i--){
			bool check = (1ll<<i)&n;
			if(check){
				ms=i;
				break;
			}
		}
		long long int ans = (1ll<<ms);
		cout<<ans-1<<"\n";
	}
	return 0;
}