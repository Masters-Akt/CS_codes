class Solution {
private:
    void dfs(vector<vector<int>>& grid, int& c, int i, int j){
        c++;
        grid[i][j] = 0;
        vector<int> d = {0, 1, 0, -1, 0};
        for(int p=0;p<4;p++){
            int x = i+d[p];
            int y = j+d[p+1];
            if(x>=0 && y>=0 && x<grid.size() && y<grid[0].size() && grid[x][y]==1) dfs(grid, c, x, y);
        }
    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    int c=0;
                    dfs(grid, c, i, j);
                    ans = max(ans, c);
                }
            }
        }
        return ans;
    }
};