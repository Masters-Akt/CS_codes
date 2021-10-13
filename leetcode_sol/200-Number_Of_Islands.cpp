class Solution {
public:
    void update(int i, int j, vector<vector<char>>& grid){
        if(i>=grid.size() || i<0 || j>=grid[i].size() || j<0) return;
        if(grid[i][j]=='1'){
            grid[i][j] = '0';
            update(i+1, j, grid);
            update(i-1, j, grid);
            update(i, j+1, grid);
            update(i, j-1, grid);
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int ans = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1'){
                    ans++;
                    update(i, j, grid);
                }
            }
        }
        return ans;
    }
};