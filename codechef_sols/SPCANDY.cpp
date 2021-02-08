#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    unsigned long long int n,k;
	    cin>>n>>k;
	    unsigned long long int student, teacher;
	    if(k==0){
	        student=0;
	        teacher = n;
	    }
	    else if(n==0){
	        student = 0;
	        teacher=0;
	       
	    }
	    else{
	        student =n/k;
	        teacher=n%k;
	    }
	    cout<<student<<" "<<teacher<<"\n";
	    
	}
	return 0;
}
