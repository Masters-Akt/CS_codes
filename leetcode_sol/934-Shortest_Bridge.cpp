class Solution {
private:
    void convert(vector<vector<int>>& grid, int i, int j, queue<pair<int, int>>& q1){
        queue<pair<int, int>> q;
        q.push({i, j});
        q1.push({i, j});
        grid[i][j] = 2;
        vector<int> dir = {0, 1, 0, -1, 0};
        while(!q.empty()){
            auto x = q.front();
            q.pop();
            for(int d=0;d<4;d++){
                int xi = x.first+dir[d], yi = x.second+dir[d+1];
                if(min(xi, yi)>=0 && max(xi, yi)<grid.size() && grid[xi][yi]==1){
                    grid[xi][yi] = 2;
                    q.push({xi, yi});
                    q1.push({xi, yi});
                }
            }
        }
    }
public:
    int shortestBridge(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        for(int i=0;i<grid.size();i++){
            bool check = false;
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    convert(grid, i, j, q);
                    check = true;
                    break;
                }
            }
            if(check) break;
        }
        vector<int> dir = {0, 1, 0, -1, 0};
        while(!q.empty()){
            auto x = q.front();
            q.pop();
            for(int d=0;d<4;d++){
                int xi = x.first+dir[d], yi = x.second+dir[d+1];
                if(min(xi, yi)>=0 && max(xi, yi)<grid.size() && (grid[xi][yi]==0 || grid[xi][yi]==1 || grid[x.first][x.second]+1<grid[xi][yi])){
                    if(grid[xi][yi]==1) return grid[x.first][x.second]-2;
                    grid[xi][yi] = grid[x.first][x.second]+1;
                    q.push({xi, yi});
                }
            }
        }
        return -1;
    }
};