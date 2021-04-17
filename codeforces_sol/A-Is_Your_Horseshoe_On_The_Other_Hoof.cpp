#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int c=4;
	if(s1==s2 || s1==s3 || s1==s4) c--;
	if(s2==s3 || s2==s4) c--;
	if(s3==s4) c--;
	cout<<4-c;
	return 0;
}
