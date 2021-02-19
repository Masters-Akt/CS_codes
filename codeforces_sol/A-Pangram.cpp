#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a[26]={0};
	for(int i=0;i<n;i++){
	    if((int)s[i]>=97 && (int)s[i]<=122) a[(int)s[i]-97]++;
	    else{
	        a[(int)s[i]-65]++;
	    }
	}
	for(int i=0;i<26;i++){
	    if(a[i]==0){
	        cout<<"NO";
	        return 0;
	    }
	}
	cout<<"YES";
	return 0;
}
