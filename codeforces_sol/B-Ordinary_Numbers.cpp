#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    int temp=n;
    int c=0;
    while(temp>0){
        c++;
        temp/=10;
    }
    if(c==1) cout<<n<<"\n";
    else{
        int count=(c-1)*9;
        int a[c];
        int temp2=n;
        for(int i=c-1;i>=0;i--){
            a[i]=temp2%10;
            temp2/=10;
        }
        int no=0;
        while(c--){
            no=no*10+a[0];
        }
        if(n>=no){
            count+=a[0];
        }else count+=(a[0]-1);
        cout<<count<<"\n";
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
