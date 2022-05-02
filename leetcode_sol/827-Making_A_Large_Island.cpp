class Solution {
private:
    void dfs(vector<vector<int>>& grid, int i, int j, int marker, int& total){
        vector<int> dir = {0, 1, 0, -1, 0};
        queue<pair<int, int>> q;
        q.push({i, j});
        grid[i][j] = marker;
        total++;
        while(!q.empty()){
            auto x = q.front();
            q.pop();
            for(int d=0;d<4;d++){
                int xi = x.first+dir[d], yi = x.second+dir[d+1];
                if(xi>=0 && yi>=0 && xi<grid.size() && yi<grid[0].size() && grid[xi][yi]==1){
                    q.push({xi, yi});
                    grid[xi][yi] = marker;
                    total++;
                }
            }
        }
    }
public:
    int largestIsland(vector<vector<int>>& grid) {
        int ans = 0;
        int marker = 2;
        unordered_map<int, int> m;
        m[0] = 0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==1){
                    int total = 0;
                    dfs(grid, i, j, marker, total);
                    m[marker++] = total;
                    ans = max(ans, total);
                }
            }
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]==0){
                    int sum = 0;
                    unordered_set<int> s;
                    if(i-1>=0) s.insert(grid[i-1][j]);
                    if(j+1<grid[0].size()) s.insert(grid[i][j+1]);
                    if(i+1<grid.size()) s.insert(grid[i+1][j]);
                    if(j-1>=0) s.insert(grid[i][j-1]);
                    for(auto y=s.begin();y!=s.end();y++) sum+=m[*y];
                    ans = max(ans, sum+1);
                }
            }
        }
        return ans;
    }
};