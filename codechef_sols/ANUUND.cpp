#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    long long int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
        sort(a,a+n);
        int j=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                cout<<a[j]<<" ";
                j=n-j-1;
            }
            else{
                cout<<a[j]<<" ";
                j=n-j;
            }
        }
        cout<<endl;
	}
	return 0;
}
