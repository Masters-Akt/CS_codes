#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int b[n];
    for(int i=0;i<n;i++) cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    int sum=0;
    int j=n-1;
    int c=0;
    while(k--){
        if(j>=0 && b[j]>=a[c]){
            sum+=b[j];
            j--;
            c++;
        }else{
            break;
        }
    }
    for(int i=c;i<n;i++) sum+=a[i];
    cout<<sum<<"\n";
}

signed main() {
	// your code goes here
	std::ios::sync_with_stdio(false);
 	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    akt();
	}
}
