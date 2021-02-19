#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	vector<string> v;
	int a[n]={0};
	for(int i=0;i<n;i++){
	    string x;
	    cin>>x;
	    auto it = find(v.begin(), v.end(), x);
	    if(it==v.end()){
	        v.push_back(x);
	        cout<<"OK\n";
	    }else{
	        a[it-v.begin()]++;
	        cout<<x<<a[it-v.begin()]<<"\n";
	    }
	}
	return 0;
}
