#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int s[n]={0};
	int p;
	cin>>p;
	for(int i=0;i<p;i++){
	    int x;
	    cin>>x;
	    s[x-1]++;
	}
	cin>>p;
	for(int i=0;i<p;i++){
	    int x;
	    cin>>x;
	    s[x-1]++;
	}
	for(int i=0;i<n;i++){
	    if(s[i]==0){
	        cout<<"Oh, my keyboard!";
	        return 0;
	    }
	}
	cout<<"I become the guy.";
	return 0;
}
