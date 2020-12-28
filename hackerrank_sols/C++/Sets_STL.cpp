//Kumar Ankit
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q;
    cin>>q;
    set<long long int>s;
    for(int i=0;i<q;i++){
        long long int a,b;
        cin>>a>>b;
        if(a==1){
            s.insert(b);
        }
        else if(a==2){
            s.erase(b);
        }
        else{
            set<long long int>::iterator itr=s.find(b);
            if(itr!=s.end()){
                cout<<"Yes\n";
            }
            else{
                cout<<"No\n";
            }
        }
    } 
    return 0;
}



