#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x=0, y=0;
	for(int i=1;i<=5;i++){
	    for(int j=1;j<=5;j++){
	        int a;
	        cin>>a;
	        if(a==1){
	            x=i;
	            y=j;
	        }
	    }
	}
	cout<<abs(x-3)+abs(y-3);
	return 0;
}
