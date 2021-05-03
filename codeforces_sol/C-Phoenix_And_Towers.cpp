#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n,m,x;
    cin>>n>>m>>x;
	vector<pair<int,int>> h(n);
    for(int i=0;i<n;i++){
        cin>>h[i].first;
        h[i].second=i;
    }
	sort(h.begin(),h.end());
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> myq;
    for(int j=0;j<m;j++){
		myq.push({0,j+1});
	}
    int result[n];
    for(int j=n-1;j>=0;j--){
        pair<int,int> temp = myq.top();
        myq.pop();
        result[h[j].second] = temp.second;
        temp.first+=h[j].first;
        myq.push(temp);
    }
    int m1=0,m2=1e12;
    for(int j=0;j<m;j++){
        pair<int,int> temp = myq.top();
        myq.pop();
        m1=max(m1,temp.first);
        m2=min(m2,temp.first);
    }
    if(m1-m2<=x){
        cout<<"YES\n";
        for(int i=0;i<n;i++) cout<<result[i]<<" ";
        cout<<"\n";
    }else{
        cout<<"NO\n";
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
		//cout<<"Case #"<<test<<": ";
	    akt();
		//cout<<"\n";
	}
}
