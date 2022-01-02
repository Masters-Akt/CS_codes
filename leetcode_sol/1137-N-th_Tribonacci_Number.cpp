//Dp
class Solution {
public:
    int tribonacci(int n) {
       int dp[3] = {0, 1, 1};
        for(int i=3;i<=n;i++){
            dp[i%3] = dp[0]+dp[1]+dp[2];
        }
        return dp[n%3];
    }
};

//Another way for DP
class Solution {
private:
    int solve(vector<int>& dp, int n){
        if(n==0 || n==1 || n==2) return dp[n];
        if(dp[n]!=0) return dp[n];
        return dp[n] = solve(dp, n-1)+solve(dp, n-2)+solve(dp, n-3);
    }
public:
    int tribonacci(int n) {
        vector<int> dp(38, 0);
        dp[1] = dp[2] = 1;
        return solve(dp, n);
    }
};