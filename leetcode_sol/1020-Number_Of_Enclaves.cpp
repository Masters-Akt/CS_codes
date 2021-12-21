class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int ans = 0;
        queue<pair<int, int>> q;
        int a=0;
        for(int i=0;i<grid.size();i++) if(grid[i][a]==1) q.push({i, a});
        a = grid[0].size()-1;
        for(int i=0;i<grid.size();i++) if(grid[i][a]==1) q.push({i, a});
        a = 0;
        for(int i=1;i<grid[0].size()-1;i++) if(grid[a][i]==1) q.push({a, i});
        a = grid.size()-1;
        for(int i=1;i<grid[0].size()-1;i++) if(grid[a][i]==1) q.push({a, i});
        vector<int> d = {0, 1, 0, -1, 0};
        while(!q.empty()){
            auto p = q.front();
            q.pop();
            int x = p.first;
            int y = p.second;
            if(grid[x][y]==0) continue;
            grid[x][y] = 0;
            for(int i=0;i<4;i++){
                int xi = x+d[i];
                int yi = y+d[i+1];
                if(xi>=0 && yi>=0 && xi<grid.size() && yi<grid[0].size() && grid[xi][yi]==1){
                    q.push({xi,yi});
                }
            }
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]) ans++;
            }
        }
        return ans;
    }
};