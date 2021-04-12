#include <bits/stdc++.h>
using namespace std;

long long power(int a, int b){
    int r=1;
    while(b>0){
        if(b&1){
            r*=a;
        }
        a*=a;
        b/=2;
    }
    return r;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    cout<<power(10,a-1)<<" "<<power(10,b-1)+power(10,c-1)<<"\n";
	}
	return 0;
}
