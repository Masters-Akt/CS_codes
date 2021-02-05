#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int c=0;
	while(n--){
	    int a, b;
	    cin>>a>>b;
	    if(b-a>=2) c++;
	}
	cout<<c;
	return 0;
}
