#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    int a[n];
    int m1=0, m2=0, c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0){
            m1=a[i];
            m2=a[i];
        }else{
            if(a[i]>m1){
                c++;
                m1=a[i];
            }else if(a[i]<m2){
                c++;
                m2=a[i];
            }
        }
    }
    cout<<c;
}

signed main() {
	// your code goes here
	std::ios::sync_with_stdio(false);
 	cin.tie(NULL);
	int t=1;
	//cin>>t;
	while(t--){
	    akt();
	}
}
