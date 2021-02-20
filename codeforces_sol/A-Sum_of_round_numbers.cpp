#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> v;
	    int i=1;
	    while(n>0){
	        if(n%10!=0){
	            v.push_back((n%10)*i);
	        }
	        n/=10;
	        i*=10;
	    }
	    cout<<v.size()<<"\n";
	    for(auto it = v.begin();it!=v.end();it++){
	        cout<< *it <<" ";
	    }
	    cout<<"\n";
	}
	return 0;
}
