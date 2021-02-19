#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	long long int l;
	cin>>n>>l;
	double a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	sort(a, a+n);
// 	for(int i=0;i<n;i++) cout<<a[i]<<" ";
// 	cout<<"\n";
	double m=0;
	if(a[0]>m) m=a[0];
	if(l-a[n-1]>m) m=l-a[n-1];
	for(int i=1;i<n;i++){
	    if((a[i]-a[i-1])/2>m) m = (a[i]-a[i-1])/2;
	   // printf("%.10f ",(a[i]-a[i-1])/2);
	}
// 	cout<<"\n";
	printf("%.10f",m);
	return 0;
}
