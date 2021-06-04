#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int w1 = max(s1,s2);
	int w2 = max(s3,s4);
	int m1 = max(s1,max(s2,max(s3,s4)));
	int m2;
	if(m1==s1) m2=max(s2,max(s3,s4));
	else if(s2==m1) m2=max(s1,max(s3,s4));
	else if(s3==m1) m2=max(s1,max(s2,s4));
	else m2 = max(s1,max(s2,s3));
	//cout<<w1<<" "<<w2<<" "<<m1<<" "<<m2<<"\n";
	if((w1==m1 && w2==m2) || (w1==m2 && w2==m1)) cout<<"YES\n";
	else cout<<"NO\n";
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
