//Kumar Ankit
#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],even=0,odd=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(i%2==0){
	            if(a[i]%2!=0){
	                even++;
	            }
	        }
	        else{
	            if(a[i]%2==0){
	                odd++;
	            }
	        }
	    }
	    if(even==odd){
	        cout<<odd<<"\n";
	    }
	    else{
	        cout<<"-1\n";
	    }
	}
	return 0;
}