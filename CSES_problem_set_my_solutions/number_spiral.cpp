//Kumar Ankit
//wrong answer
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long d;
        (x<y)?d=(y*y-y+1)+(y-x):d=(x*x-x+1)+(x-y);
        cout<<d<<"\n";
    }
    return 0;
}