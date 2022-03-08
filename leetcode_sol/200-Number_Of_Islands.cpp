//DFS
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

//Same method but in a better way of writing
class Solution {
private:
    void update(int i, int j, vector<vector<char>>& grid){
        if(i>=grid.size() || i<0 || j>=grid[i].size() || j<0) return;
        vector<int> dir = {0, 1, 0, -1, 0};
        if(grid[i][j]=='1'){
            grid[i][j] = '0';
            for(int p=0;p<4;p++){
                update(i+dir[p], j+dir[p+1], grid);
            }
        }
    }
public:
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