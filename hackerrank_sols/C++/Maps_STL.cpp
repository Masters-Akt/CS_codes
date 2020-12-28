//Kumar Ankit
#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q;
    cin>>q;
    map<string,int>m;
    for(int i=0;i<q;i++){
        int a;
        cin>>a;
        if(a==1){
            string s;
            int b;
            cin>>s>>b;
            map<string,int>::iterator itr=m.find(s);
            if(itr==m.end())
            m.insert(make_pair(s,b));
            else
            m[s]=m[s]+b;
        }
        else if(a==2){
            string s;
            cin>>s;
            m.erase(s);
        }
        else{
            string s;
            cin>>s;
            map<string,int>::iterator itr=m.find(s);
            if(itr!=m.end()){
                cout<<m[s]<<"\n";
            }
            else{
                cout<<"0\n";
            }
        }
    } 
    return 0;
}
