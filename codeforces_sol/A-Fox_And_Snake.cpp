#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	int a[n][m];
	bool ch = true;
	for(int i=0;i<n;i++){
	    for(int j=0;j<m;j++){
	        if(i%2==0){
	            cout<<"#";
	        }else{
	            if(ch){
	                if(j==m-1){
	                    cout<<"#";
	                    ch=false;
	                }else{
	                    cout<<".";
	                }
	            }else{
	                if(j==0){
	                    cout<<"#";
	                }else if(j==m-1){
	                    cout<<".";
	                    ch=true;
	                }else{
	                    cout<<".";
	                }
	            }
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
