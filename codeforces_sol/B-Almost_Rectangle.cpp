#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    char a[n][n];
    int i1,j1,i2,j2;
    bool ch = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if(a[i][j]=='*'){
                if(ch){
                    i1=i;
                    j1=j;
                    ch=false;
                }else{
                    i2=i;
                    j2=j;
                }
            }
        }
    }
    //cout<<i1<<" "<<j1<<" "<<i2<<" "<<j2<<"\n";
    if(j1==j2){
        if(j1-1>=0){
            a[i1][j1-1]='*';
            a[i2][j2-1]='*';
        }else {
            a[i1][j1+1]='*';
            a[i2][j2+1]='*';
        }
    }else if(i1==i2){
        if(i1-1>=0){
            a[i1-1][j1]='*';
            a[i2-1][j2]='*';
        }else{
            a[i1+1][j1]='*';
            a[i2+1][j2]='*';
        }
    }else{
        a[i1][j2]='*';
        a[i2][j1]='*';
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j];
        }
        cout<<"\n";
    }
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
