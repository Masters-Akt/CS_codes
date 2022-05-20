class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        vector<vector<int>> dp(obstacleGrid.size(), vector<int>(obstacleGrid[0].size(), 0));
        bool checkRow = true, checkColumn = true;
        for(int i=0;i<obstacleGrid.size();i++){
            for(int j=0;j<obstacleGrid[i].size();j++){
                if(i==0 || j==0){
                    if(obstacleGrid[i][j]==1){
                        if(i==0) checkRow = false;
                        if(j==0) checkColumn = false;
                        continue;
                    }
                    if(i==0 && checkRow) dp[i][j] = 1;
                    if(j==0 && checkColumn) dp[i][j] = 1;
                    continue;
                }
                if(obstacleGrid[i][j]==1) continue;
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
            }
        }
        return dp[dp.size()-1][dp[0].size()-1];
    }
};