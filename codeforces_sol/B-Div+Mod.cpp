#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    long long l, r, a;
    cin>>l>>r>>a;
    int maxans = r%a+r/a;
    int check = (r/a)*a-1;
    if(check>=l) cout<<max(maxans, (check%a+check/a));
    else cout<<maxans;
    cout<<"\n";
}

signed main(){
//     #ifndef ONLINE_JUDGE
// 		freopen("input.txt", "r", stdin);
// 		freopen("output.txt", "w", stdout);
// 	#endif
    std::ios::sync_with_stdio(false);
 	cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	for(int test=1;test<=t;test++){
	    akt();
	}
}
