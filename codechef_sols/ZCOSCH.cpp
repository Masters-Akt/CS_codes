#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n;
	    cin>>n;
	    if(n>=1&&n<=50){
	        cout<<100;
	    }
	    else if(n>=51&&n<=100){
	        cout<<50;
	    }
	    else
	    cout<<0;
	return 0;
}
