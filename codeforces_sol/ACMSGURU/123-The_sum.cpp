#include <bits/stdc++.h>
using namespace std;

int dp[41];

int fib(int n){
    if(dp[n-1]!=0) return dp[n-1];
    if(n==1 || n==2){
        dp[n-1]=1;
        return 1;
    }else{
        dp[n-1] = fib(n-1)+fib(n-2);
        return dp[n-1];
    }
}

void solve(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=fib(i);
    }
    cout<<sum;
}

int main() {
	// your code goes here
	for(int i=0;i<41;i++) dp[i]=0;
	int n;
	cin>>n;
	solve(n);
	return 0;
}
