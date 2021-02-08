#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    double r,x1,x2,x3,y1,y2,y3,c=0;
	    cin>>r>>x1>>y1>>x2>>y2>>x3>>y3;
	    double d1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	    if(d1<=r)
	    c++;
	    double d2=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
	    if(d2<=r)
	    c++;
	    double d3=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
	    if(d3<=r)
	    c++;
	    if(c>=2){
	        cout<<"yes\n";
	    }
	    else{
	        cout<<"no\n";
	    }
	}
	return 0;
}
