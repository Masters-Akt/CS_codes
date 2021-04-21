#include <bits/stdc++.h>
using namespace std;
#define int long long

void akt(){
    int n;
    cin>>n;
    int a=0, b=0, an=0, bn=0, temp=n;
    while(temp>0){
        if(an>=n/2){
            b+=pow(2,temp);
            bn++;
        }else if(bn>=n/2){
            a+=pow(2,temp);
            an++;
        }else{
        if(a>b){
            b+=pow(2,temp);
            bn++;
        }else{
            a+=pow(2,temp);
            an++;
        }
        }
        temp--;
    }
    cout<<abs(a-b)<<"\n";
}

signed main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    akt();
	}
}
