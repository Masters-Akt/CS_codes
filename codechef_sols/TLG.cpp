#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int p1[n],p2[n],player=0,lead=0,maxlead=0;
	for(int i=0;i<n;i++){
	    cin>>p1[i]>>p2[i];
	    if(i!=0){
	        p1[i]=p1[i]+p1[i-1];
	        p2[i]=p2[i]+p2[i-1];
	    }
	    lead=abs(p1[i]-p2[i]);
	    if(lead>maxlead){
	        maxlead=lead;
	        if(p1[i]>p2[i]){
	            player=1;
	        }
	        else{
	            player=2;
	        }
	    }
	}
	cout<<player<<" "<<maxlead;
	
	return 0;
}
