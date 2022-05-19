//M1 - TLE - Brute Force
class Solution {
private:
    int solve(vector<vector<int>>& matrix, int i, int j){
        int ans = 1;
        vector<int> dir = {0, 1, 0, -1, 0};
        for(int d=0;d<4;d++){
            int xi = i+dir[d], yi = j+dir[d+1];
            if(xi>=0 && yi>=0 && xi<matrix.size() && yi<matrix[0].size() && matrix[xi][yi]>matrix[i][j]){
                ans = max(ans, solve(matrix, xi, yi)+1);
            }
        }
        return ans;
    }
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int ans = 1;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                ans = max(ans, solve(matrix, i, j));
            }
        }
        return ans;
    }
};

//M2 - DP
class Solution {
private:
    int solve(vector<vector<int>>& matrix, int i, int j, vector<vector<int>>& dp){
        if(dp[i][j]!=-1) return dp[i][j];
        dp[i][j] = 1;
        vector<int> dir = {0, 1, 0, -1, 0};
        for(int d=0;d<4;d++){
            int xi = i+dir[d], yi = j+dir[d+1];
            if(xi>=0 && yi>=0 && xi<matrix.size() && yi<matrix[0].size() && matrix[xi][yi]>matrix[i][j]){
                dp[i][j] = max(dp[i][j], solve(matrix, xi, yi, dp)+1);
            }
        }
        return dp[i][j];
    }
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int ans = 1;
        vector<vector<int>> dp(matrix.size(), vector<int>(matrix[0].size(), -1));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                ans = max(ans, solve(matrix, i, j, dp));
            }
        }
        return ans;
    }
};