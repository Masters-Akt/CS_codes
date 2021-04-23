#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = 0;
        }
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i][i] = x;
        x--;
        int j=i, k=i;
        while(x>0){
            if(j!=0){
                j--;
                if(a[k][j]==0)
                a[k][j]=a[i][i];
                else{
                    j++;
                    k++;
                    a[k][j]=a[i][i];
                }
            }else{
                k++;
                a[k][j]=a[i][i];
            }
            x--;
        }
        
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
}

signed main() {
	// your code goes here
	int t=1;
	//cin>>t;
	while(t--){
	    akt();
	}
}
