//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;

vector<int> subsets;

void search(int k, int n){
    if(k==n+1){
       return;
    }
    subsets.push_back(k);
    search(k+1, n);
    cout<<"{";
    for(int i=0;i<subsets.size();i++){
        cout<<subsets[i]<<" ";
    }
    cout<<"} ";
    subsets.pop_back();
    search(k+1, n);
}

int main(){
    cout<<"Enter n : ";
    int n;
    cin>>n;
    cout<<"{ } ";
    search(1, n);
}