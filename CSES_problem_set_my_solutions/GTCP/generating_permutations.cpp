//Kumar Ankit
#include<bits/stdc++.h>
using namespace std;

vector<int> permutation;

void search(int n, bool* chosen){
    if(permutation.size() == n) return;
    for(int i=1;i<=n;i++){
        if(chosen[i]) continue;
        chosen[i] = true;
        permutation.push_back(i);
        search(n, chosen);
        if(permutation.size()==n){
            cout<<"{";
            for(int i=0;i<permutation.size();i++){
                cout<<permutation[i]<<" ";
            }
            cout<<"} ";
        }
        chosen[i] = false;
        permutation.pop_back();
    }
}

void search2(int n){
    for(int i=1;i<=n;i++){
        permutation.push_back(i);
    }
    do{
        cout<<"{";
        for(int i=0;i<permutation.size();i++){
            cout<<permutation[i]<<" ";
        }
        cout<<"} ";
    }while(next_permutation(permutation.begin(), permutation.end()));
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    bool chosen[n+1];
    cout<<"Without using standard library: ";
    search(n, chosen);
    cout<<"\nUsing standard library: ";
    search2(n);
    return 0;
}