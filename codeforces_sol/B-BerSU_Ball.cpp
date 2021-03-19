#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) cin>>a[i];
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++) cin>>b[i];
	sort(a, a+n);
	sort(b, b+m);
	int c=0;
	int i=0, j=0, k=j;;
	while(i<n){
	    j=k;
	    while(j<m){
	        if(a[i]==b[j] || abs(a[i]-b[j])==1){
	            c++;
	            j++;
	            k=j;
	            break;
	        }
	        j++;
	    }
	    i++;
	}
	cout<<c<<"\n";
	return 0;
}
