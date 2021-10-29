class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        int present = 0;
        vector<vector<int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for(int i=0;i<grid.size();i++) {
            for(int j=0;j<grid[i].size();j++) {
                if(grid[i][j]>0) present++;
                if(grid[i][j]==2) q.push({i, j});
            }
        }
        int ans = -1;
        while(!q.empty()){
            ans++;
            int s = q.size();
            for(int i=0;i<s;i++){
                pair<int, int> p = q.front();
                present--;
                q.pop();
                for(int j=0;j<4;j++){
                    int x = p.first+d[j][0];
                    int y = p.second+d[j][1];
                    if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size() || grid[x][y]!=1) continue;
                    grid[x][y] = 2;
                    q.push({x, y});
                }
            }
        }
        if(present==0) return max(0, ans);
        return -1;
    }
};