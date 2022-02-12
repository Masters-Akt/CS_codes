class Solution {
private:
    void changeIt(vector<vector<int>>& grid, int i, int j){
        queue<pair<int, int>> q;
        q.push({i, j});
        vector<int> d = {0, 1, 0, -1, 0};
        while(!q.empty()){
            auto x = q.front();
            q.pop();
            grid[x.first][x.second] = 1;
            for(int p=0;p<4;p++){
                int xi = x.first+d[p];
                int yi = x.second+d[p+1];
                if(xi>=0 && yi>=0 && xi<grid.size() && yi<grid[0].size() && !grid[xi][yi]){
                    q.push({xi, yi});
                }
            }
        }
    }
public:
    int closedIsland(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            if(grid[i][0]==0) changeIt(grid, i, 0);
            if(grid[i][grid[i].size()-1]==0) changeIt(grid, i, grid[i].size()-1);
        }
        for(int i=0;i<grid[0].size();i++){
            if(grid[0][i]==0) changeIt(grid, 0, i);
            if(grid[grid.size()-1][i]==0) changeIt(grid, grid.size()-1, i);
        }
        int ans = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==0){
                    ans++;
                    changeIt(grid, i, j);
                }
            }
        }
        return ans;
    }
};