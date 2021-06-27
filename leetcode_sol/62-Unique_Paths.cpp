//Method 1 - Recursion - Gives TLE - TC=exponential SC=exponential
class Solution {
public:
    int countPaths(int i, int j, int n, int m){
        if(i==n-1 && j==m-1) return 1;
        if(i>=n || j>=m) return 0;
        return countPaths(i+1, j, n, m)+countPaths(i, j+1, n, m);
    }
    
    int uniquePaths(int m, int n) {
        int i=0, j=0;
        return countPaths(i, j, m, n);
    }
};

//Method 2 - Dynamic Problem Approach - TC=O(mxn) SC~=O(mxn)
class Solution {
public:
    int countPaths(int i, int j, int m, int n, vector<vector<int>> &dp){
        if(i==m-1 && j==n-1) return 1;
        if(i>=m || j>=n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j] = countPaths(i+1, j, m, n, dp)+countPaths(i, j+1, m, n, dp);
    }
    
    int uniquePaths(int m, int n) {
        int i=0, j=0;
        vector<vector<int>> dp(m, vector<int>(n,-1));
        return countPaths(i, j, m, n, dp);
    }
};