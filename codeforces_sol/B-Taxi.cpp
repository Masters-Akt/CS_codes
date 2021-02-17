#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	int c1=0, c2=0, c3=0, c4=0;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    if(a[i]==1) c1++;
	    else if(a[i]==2) c2++;
	    else if(a[i]==3) c3++;
	    else c4++;
	}
	int c = c4+c3;
	if(c2%2==0){ 
	    c+=(c2/2);
	    c2=0;
	}else{
	    c+=(c2/2+1);
	    c2=1;
	}
	if(c3+c2>=c1){
	    cout<<c;
	    return 0;
	}else{
	    c1=c1-c3;
	    c1=c1-c2*2;
	    if(c1%4==0){
	        c+=(c1/4);
	    }else{
	        c+=(c1/4+1);
	    }
	}
	cout<<c;
	return 0;
}
