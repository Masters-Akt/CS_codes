#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int c[101]={0};
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        c[a[i]]++;
	    }
	    int b[n];
	    int j=0;
	    for(int i=0;i<101;i++){
	        if(c[i]>0){
	            b[j]=i;
	            j++;
	            c[i]--;
	        } 
	    }
	    for(int i=0;i<101;i++){
	        while(c[i]>0){
	            b[j]=i;
	            j++;
	            c[i]--;
	        }
	    }
	    for(int i=0;i<n;i++){
	        cout<<b[i]<<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}