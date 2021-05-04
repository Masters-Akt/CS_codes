#include <bits/stdc++.h>
using namespace std;
#define int long long

bool isPrime(int n){
    if(n<=1) return true;
    for(int i=2;i<n;i++)
        if(n%i==0)
            return true;
    return false;
}

void akt(){
    int n;
    cin>>n;
    int a=n/2;
    int b=n-a;
    while(!(isPrime(a) && isPrime(b))){
        a--;
        b++;
    }
    cout<<a<<" "<<b;
}

signed main() {
	// your code goes here
	std::ios::sync_with_stdio(false);
 	cin.tie(NULL);
	int t=1;
	//cin>>t;
	while(t--){
	    akt();
	}
}
