//M1 - Recursion - TLE
class Solution {
private:
    int rec(vector<int> cost ,int n){
        if(n<0) return 0;
        if(n==0 || n==1) return cost[n];
        return cost[n]+min(rec(cost, n-1), rec(cost, n-2));
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        return min(rec(cost, cost.size()-1), rec(cost, cost.size()-2));
    }
};

//M2 - Top Down DP - Recursion+Memoization
class Solution {
private:
    int rec(vector<int> cost ,int n, vector<int>& dp){
        if(n<0) return 0;
        if(n==0 || n==1) return cost[n];
        if(dp[n]) return dp[n];
        return dp[n] = cost[n]+min(rec(cost, n-1, dp), rec(cost, n-2, dp));
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size());
        return min(rec(cost, cost.size()-1, dp), rec(cost, cost.size()-2, dp));
    }
};