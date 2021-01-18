//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d;
        cin>>n>>d;
        int a[n];
        int g=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<=d) g++;
        }
        sort(a, a+n);
        if(a[0]+a[1]<=d || g==n)
        cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}