//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        char a[n][m];
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<m;i++){
            if(a[n-1][i]=='D') c++;
        }
        for(int i=0;i<n;i++){
            if(a[i][m-1]=='R') c++;
        }
        cout<<c<<"\n";
    }
    return 0;
}