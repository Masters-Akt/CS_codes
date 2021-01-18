//Kumar Ankit
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n;
	cin>>n;
	int total=0;
	while(n--){
	    int x;
	    int c=0;
	    for(int i=0;i<3;i++){
	        cin>>x;
	        if(x==1) c++;
	    }
	    if(c>=2) total++;
	}
	cout<<total;
	return 0;
}