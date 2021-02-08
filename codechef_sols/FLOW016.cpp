#include <iostream>
using namespace std;

int fgcd(long long int a, long long int b){
    if(b==0)
    return a;
    else
    return fgcd(b,a%b);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int a,b;
	    cin>>a>>b;
	    long long int gcd=fgcd(a,b);
	    long long int lcm=(a*b)/gcd;
	    cout<<gcd<<" "<<lcm<<endl;
	}
	return 0;
}
