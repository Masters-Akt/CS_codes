#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    int a[n];
    int ct1=0, ct2=0, ct3=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1) ct1++;
        else if(a[i]==2) ct2++;
        else ct3++;
    }
    int count = min(ct1,min(ct2,ct3));
    cout<<count<<"\n";
    if(count!=0){
    int t1=0, t2=0, t3=0;
    while(t1<n){
        if(a[t1]!=1) t1++;
        else break;
    }
    while(t2<n){
        if(a[t2]!=2) t2++;
        else break;
    }
    while(t3<n){
        if(a[t3]!=3) t3++;
        else break;
    }
    while(t1<n && t2<n && t3<n){
        cout<<t1+1<<" "<<t2+1<<" "<<t3+1<<"\n";
        t1++;
        t2++;
        t3++;
        while(t1<n){
            if(a[t1]!=1) t1++;
            else break;
        }
        while(t2<n){
            if(a[t2]!=2) t2++;
            else break;
        }
        while(t3<n){
            if(a[t3]!=3) t3++;
            else break;
        }
    }
    }
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
