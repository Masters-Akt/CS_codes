//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;
 
long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
long long lcm(long long int a, long long int b)
{
    return (a / gcd(a, b)) * b;
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a;
        cin>>b;
        long long int al = a.length();
        long long int bl = b.length();
        long long int lcmab = lcm(al,bl);
        long long int a2 = lcmab/al;
        long long int b2 = lcmab/bl;
        string x="", y="";
        for(int i=0;i<a2;i++){
            x=x+a;
        }
        for(int i=0;i<b2;i++){
            y=y+b;
        }
        if(x.compare(y)==0) cout<<x<<"\n";
        else cout<<"-1\n";
    }
    return 0;
}