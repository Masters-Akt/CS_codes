#include <iostream>
using namespace std;
int rev(int a){
    int r=0;
    while(a>0){
        r=r*10+a%10;
        a=a/10;
    }
    return r;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    a=rev(a);
	    b=rev(b);
	    int sum=a+b;
	    sum=rev(sum);
	    cout<<sum<<"\n";
	}
	return 0;
}
