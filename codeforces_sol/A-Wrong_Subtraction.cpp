#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int n,k;
	cin>>n>>k;
	//cout<<n<<" "<<k<<"\n";
	int c=0;
	while(k>0){
	    if(n%10==0){
	        n=n/10;
	        k--;
	    }else{
	        if(n%10<=k){
	            int temp=n%10;
	            n=n-temp;
	            k=k-temp;
	        }else{
	            n=n-k;
	            k=0;
	        }
	    }
	    //cout<<n<<" "<<k<<"\n";
	}
	cout<<n;
	return 0;
}
