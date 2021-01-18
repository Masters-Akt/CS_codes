//Kumar Ankit
#include <iostream>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    string b;
	    cin>>b;
	    string a="";
	    for(int i=0;i<b.length();i+=2){
	        a=a+b[i];
	    }
	    a=a+b[b.length()-1];
	    cout<<a<<"\n";
	}
	return 0;
}