#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string a,b;
	cin>>a>>b;
	for(int i=0;i<a.length();i++){
	    int x,y;
	    if((int)a[i]>=65&&(int)a[i]<=90) x = (int)a[i]+32;
	    else x = (int)a[i];
	    if((int)b[i]>=65&&(int)b[i]<=90) y = (int)b[i]+32;
	    else y = (int)b[i];
	    if(x>y){
	        cout<<"1";
	        return 0;
	    }
	    if(x<y){
	        cout<<"-1";
	        return 0;
	    }
	}
	cout<<"0";
	return 0;
}
