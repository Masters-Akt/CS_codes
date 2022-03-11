#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ull unsigned long long

ull cal(ull b,ull p)
{
    ull k=1,l=b;
    while(p){
        if(p & 1){
            k=(k*l);
        }
        l=(l*l);
        p=p/2;
    }
    return k;
}

void akt(){
    int n;
	cin>>n;
	cout<<cal(2,n)-1<<"\n";
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
