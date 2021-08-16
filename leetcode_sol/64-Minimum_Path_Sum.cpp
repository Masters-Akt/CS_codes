class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(i==0 && j==0) continue;
                if(i==0){
                    grid[i][j]+=grid[i][j-1];
                }else if(j==0){
                    grid[i][j]+=grid[i-1][j];
                }else{
                    int temp = min(grid[i][j-1], grid[i-1][j]);
                    grid[i][j]+=temp;
                }
            }
        }
        return grid[grid.size()-1][grid[grid.size()-1].size()-1];
    }
};