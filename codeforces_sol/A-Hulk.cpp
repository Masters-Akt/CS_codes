#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	string ans="";
	if(n==1){
	    ans=ans+"I hate it";
	    cout<<ans;
	    return 0;
	}else{
	    ans=ans+"I hate ";
	}
	n--;
	for(int i=1;i<=n;i++){
	    if(i%2==1){
	        ans=ans+"that I love ";
	    }else{
	        ans = ans+"that I hate ";
	    }
	}
	ans=ans+"it";
	cout<<ans;
	return 0;
}
