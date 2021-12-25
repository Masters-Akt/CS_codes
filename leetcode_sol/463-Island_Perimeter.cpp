class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int si=-1, sj=-1;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]){
                    si = i, sj = j;
                    break;
                }
            }
            if(si!=-1) break;
        }
        vector<vector<bool>> vis(grid.size(), vector<bool>(grid[0].size(), false));
        if(si==-1) return 0;
        int ans = 0;
        queue<pair<int, int>> q;
        q.push({si, sj});
        vector<int> dir = {0, 1, 0, -1, 0};
        while(!q.empty()){
            int s = q.size();
            while(s--){
                int i = q.front().first;
                int j = q.front().second;
                q.pop();
                int temp = 4;
                vis[i][j]=true;
                for(int k=0;k<4;k++){
                    int ti = i+dir[k];
                    int tj = j+dir[k+1];
                    if(ti>=0 && tj>=0 && ti<grid.size() && tj<grid[0].size() && grid[ti][tj]==1){
                        temp--;
                        if(!vis[ti][tj]){
                            vis[ti][tj] = true;
                            q.push({ti, tj});
                        }
                    }
                }
                ans+=temp;
            }
        }
        return ans;
    }
};