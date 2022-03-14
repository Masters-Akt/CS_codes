//M1 - TLE
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

//DFS - TLE
class Solution {
private:
    void dfs(vector<vector<int>>& grid, int i, int j, int dist = 1){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[i].size() || (grid[i][j]!=0 && grid[i][j]<=dist)) return;
        grid[i][j] = dist;
        dfs(grid, i-1, j, dist+1);
        dfs(grid, i+1, j, dist+1);
        dfs(grid, i, j-1, dist+1);
        dfs(grid, i, j+1, dist+1);
}
public:
    int maxDistance(vector<vector<int>>& grid, int ans = -1) {
        for(auto i=0; i<grid.size(); i++)
            for(auto j=0; j<grid[i].size(); j++)
                if(grid[i][j]==1){
                    grid[i][j] = 0;
                    dfs(grid, i, j);
                }
        for(auto i=0; i<grid.size(); i++)
            for(auto j=0; j<grid[i].size(); j++)
                if(grid[i][j]>1) ans = max(ans, grid[i][j]-1);
        return ans;
    }
};

//BFS - AC
class Solution {
public:
    int maxDistance(vector<vector<int>>& grid, int ans = -1) {
        queue<pair<int,int>>q;
        int steps=0, r=grid.size(), c=grid[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]==1){
                    q.push({i-1,j});
                    q.push({i+1,j});
                    q.push({i,j-1});
                    q.push({i,j+1});
                }
            }
        }
        while(!q.empty()){
            int size=q.size();
            steps++;
            for(int k=0;k<size;k++){
                int i=q.front().first,j=q.front().second;
                q.pop();
                if(i>=0&&j>=0&&i<r&&j<c&&grid[i][j]==0){
                    grid[i][j]=steps;
                    q.push({i-1,j});
                    q.push({i+1,j});
                    q.push({i,j-1});
                    q.push({i,j+1});
                }
            }
        }
        return steps==1?-1:steps-1;
    }
};