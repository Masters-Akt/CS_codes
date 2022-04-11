class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        const int m = grid.size(), n = grid[0].size();
        vector<vector<int>> ans(m, vector<int>(n, 0));
        for(int i=0; i<m*n; i++){
            int original_x = i/n, original_y = i%n;
            int new_x = (original_x+(original_y+k)/n)%m, new_y = (original_y+k)%n;
            ans[new_x][new_y] = grid[original_x][original_y];
        }
        return ans;
    }
};