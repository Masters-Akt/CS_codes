#include <iostream>
using namespace std;
#define INT_MAX 10000

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    int min=INT_MAX;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(a[i]<min){
	            min=a[i];
	        }
	    }
	    int s=0;
	    for(int i=0;i<n;i++){
	        s+=(a[i]-min);
	    }
	    cout<<s<<"\n";
	}
	return 0;
}
