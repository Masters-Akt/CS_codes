//Recursion
class Solution {
public:
    int fib(int N) {
        if(N==0) return 0;
        if(N==1) return 1;
        return fib(N-1)+fib(N-2);
    }
};

//DP
class Solution {
public:
    int dp[31] = {0};
    int fib(int n) {
        if(n==0 || n==1) return n;
        if(dp[n]!=0) return dp[n];
        dp[n] = fib(n-1)+fib(n-2);
        return dp[n];
    }
};

//Better way of writing DP
class Solution {
private:
    int solve(vector<int>& dp, int n){
        if(n==0 || n==1) return n;
        if(dp[n]!=0) return dp[n];
        return dp[n] = solve(dp, n-1) + solve(dp, n-2);
    }
public:
    int fib(int n) {
        vector<int> dp(31, 0);
        dp[1] = 1;
        return solve(dp, n);
    }
};