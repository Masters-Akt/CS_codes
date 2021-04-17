#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int y;
	cin>>y;
	int ny=y;
	int t1=0, t2=0, t3=0, t4=0;
	while(!(t1!=t2 && t1!=t3 && t1!=t4 && t2!=t3 && t2!=t4 && t3!=t4)){
	    ny++;
	    int temp=ny;
	    t1=temp%10;
	    temp/=10;
	    t2=temp%10;
	    temp/=10;
	    t3=temp%10;
	    temp/=10;
	    t4=temp%10;
	}
	cout<<ny;
	return 0;
}
