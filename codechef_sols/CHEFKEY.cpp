#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n,m,c;
	    cin>>n>>m>>c;
	    long long int count=0;
	    for(long long int i=1;i<=n;i++){
	        if(c%i==0){
	            long long int d=c/i;
	            if(d<=m){
	                count++;
	            }
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
