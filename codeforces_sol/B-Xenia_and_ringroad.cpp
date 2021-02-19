#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int n,m;
	cin>>n>>m;
	long long int x=1;
	long long int sum=0;
	//cout<<x<<" "<<sum<<"\n";
	for(int i=0;i<m;i++){
	    int y;
	    cin>>y;
	    if(y<x){
	        sum+=(n+y-x);
	    }else if(y>x){
	        sum+=(y-x);
	    }
	    //cout<<x<<" "<<y<<" "<<sum<<"\n";
	    x=y;
	}
	cout<<sum;
	return 0;
}
