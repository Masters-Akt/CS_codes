#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,q;
	cin>>n>>q;
	list<int> l;
	for(int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    l.push_back(x);
	}
	while(q--){
	    int c=0;
	    int t;
	    cin>>t;
	    for(auto it=l.begin();it!=l.end();it++){
	        c++;
	        if(*it == t){
	            cout<<c<<" ";
	            int temp = *it;
	            l.erase(it);
	            l.insert(l.begin(), temp);
	            break;
	        }
	    }
	}
	return 0;
}
