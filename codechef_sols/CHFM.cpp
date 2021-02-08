#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	long long int a[n];
	long long int sum=0;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    sum+=a[i];
	}
	double mean=(double)sum/n;
	if(mean==(long long int)mean){
	    int index=-1;
	    for(int i=0;i<n;i++){
	        if((long long int)mean==a[i]){
	            index=i;
	            break;
	        }
	    }
	    if(index==-1){
	        cout<<"Impossible\n";
	    }
	    else{
	        cout<<index+1<<"\n";
	    }
	}
	else{
	    cout<<"Impossible\n";
	}
	}
	return 0;
}
