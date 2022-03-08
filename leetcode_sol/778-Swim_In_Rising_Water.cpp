class Solution {
private:
    void solve(vector<vector<int>>& grid, vector<int>& dir, vector<vector<int>>& dp, int i, int j, int currCell){
        if(i>=0 && j>=0 && i<grid.size() && j<grid[0].size() && max(currCell, grid[i][j])<dp[i][j]){
            dp[i][j] = max(currCell, grid[i][j]);
            for(int d=0;d<4;d++){
                solve(grid, dir, dp, i+dir[d], j+dir[d+1], dp[i][j]);
            }
        }
    }
public:
    int swimInWater(vector<vector<int>>& grid) {
        vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), INT_MAX));
        vector<int> dir = {0, 1, 0, -1, 0};
        solve(grid, dir, dp, 0, 0, grid[0][0]);
        return dp[grid.size()-1][grid.size()-1];
    }
};