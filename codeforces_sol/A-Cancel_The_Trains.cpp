//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int count=0;
        int b[n];
        for(int i=0;i<n;i++) cin>>b[i];
        int l[m];
        for(int i=0;i<m;i++){
            cin>>l[i];
            for(int j=0;j<n;j++){
                if(l[i]==b[j]){
                    count++;
                    break;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}