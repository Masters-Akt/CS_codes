#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int b;
	    cin>>b;
	    int n=0;
	    if(b==1||b==2||b==3){
	        n=0;
	    }
	    else{
	        int p;
	        p=b/2;
	        p--;
	        n=(p*(p+1))/2;
	    }
	    cout<<n<<"\n";
	}
	return 0;
}
