#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]!=a[0]){
            if(i!=n-1){
                if(a[i+1]!=a[0]){
                    cout<<"1\n";
                }else{
                    cout<<i+1<<"\n";
                }
                break;
            }else{
                cout<<n<<"\n";
            }
        }
    }
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    akt();
	}
}
