#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	bool ch = true;
	while(n--){
	    int x;
	    cin>>x;
	    if(x==1) ch=false;
	}
	if(!ch) cout<<"HARD";
	else cout<<"EASY";
	return 0;
}
