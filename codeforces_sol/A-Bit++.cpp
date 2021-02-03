#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int x=0;
	while(n--){
	    string s;
	    cin>>s;
	    if(s[1]=='+'){
	        x++;
	    }else{
	        x--;
	    }
	}
	cout<<x;
	return 0;
}
