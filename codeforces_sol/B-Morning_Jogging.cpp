#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n,m;
    cin>>n>>m;
    int b[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
        sort(b[i],b[i]+m);
    }
    int a[n][m];
    bool c[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=0;
            c[i][j]=false;
        }
    }
    int d[n] = {0};
    for(int i=0;i<m;i++){
        int temp=INT_MAX;
        int index;
        for(int j=0;j<n;j++){
            if(d[j]<m){
                if(b[j][d[j]]<temp){
                    temp = b[j][d[j]];
                    index = j;
                }
            }
        }
        c[index][i] = true;
        a[index][i] = b[index][d[index]];
        d[index]++;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!c[i][j]){
                a[i][j] = b[i][d[i]];
                d[i]++;
            }
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
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
