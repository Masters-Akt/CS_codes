#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    int a[n];
    int c=0,minindex,maxindex,max=0,min=51;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>max){
            max=a[i];
            maxindex=i;
        }
        if(a[i]<min){
            min=a[i];
            minindex=i;
        }
        if(i!=0){
            if(a[i]>a[i-1]) c++;
        }
    }
    if(c==n-1){
        cout<<"0\n";
    }else if(minindex==0 || maxindex==n-1){
        cout<<"1\n";
    }else if(maxindex==0 && minindex==n-1){
        cout<<"3\n";
    }else cout<<"2\n";
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
