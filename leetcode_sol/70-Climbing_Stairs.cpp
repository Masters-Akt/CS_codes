//Recursion - TLE
class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1) return 1;
        return climbStairs(n-1)+climbStairs(n-2);
    }
};

//Memoization
class Solution {
private:
    int solve(int n, vector<int>& dp){
        if(dp[n]!=-1) return dp[n];
        return dp[n] = solve(n-1, dp)+solve(n-2, dp);
    }
public:
    int climbStairs(int n) {
        vector<int> dp(46, -1);
        dp[0]=1;
        dp[1]=1;
        return solve(n, dp);
    }
};

//Method optimized
class Solution {
public:
    int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        int ostep = 2, tstep = 1, total = 0;
        for(int i=2;i<n;i++){
            total = ostep + tstep;
            tstep = ostep;
            ostep = total;
        }
        return total;
    }
};