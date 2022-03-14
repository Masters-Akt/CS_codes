//BFS - TLE
class Solution {
private:
    void bfs(vector<vector<int>>& grid, int& ans, int i, int j){
        map<pair<int, int>, int> vis;
        queue<pair<int, int>> q;
        q.push({i, j});
        vis[{i, j}] = 1;
        int level = 0;
        vector<int> dir = {0, 1, 0, -1, 0};
        while(!q.empty()){
            int s = q.size();
            while(s--){
                auto x = q.front();
                q.pop();
                if(grid[x.first][x.second]==1){
                    ans = max(ans, level);
                    return;
                }
                for(int d=0;d<4;d++){
                    int xi = x.first+dir[d];
                    int yi = x.second+dir[d+1];
                    if(xi>=0 && yi>=0 && xi<grid.size() && yi<grid[0].size() && !vis[{xi, yi}]){
                        if(grid[xi][yi]==1){
                            ans = max(ans, level+1);
                            return;
                        }
                        vis[{xi, yi}] = 1;
                        q.push({xi, yi});
                    }
                }
            }
            level++;
        }
    }
public:
    int maxDistance(vector<vector<int>>& grid) {
        int ans = -1;
        bool check = false;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    check = true;
                    break;
                }
            }
            if(check) break;
        }
        if(!check) return ans;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==0){
                    bfs(grid, ans, i, j);
                }
            }
        }
        return ans;
    }
};

//DFS - AC
