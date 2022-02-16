class Solution {
private:
    void bfs(vector<vector<int>>& grid1, vector<vector<int>>& grid2, int i, int j){
        queue<pair<int, int>> q;
        q.push({i, j});
        grid1[i][j] = 0;
        if(grid2[i][j]==1) grid2[i][j] = 2;
        vector<int> d = {0, 1, 0, -1, 0};
        while(!q.empty()){
            auto x = q.front();
            q.pop();
            for(int p=0;p<4;p++){
                int xi = x.first+d[p];
                int xj = x.second+d[p+1];
                if(xi>=0 && xj>=0 && xi<grid1.size() && xj<grid1[0].size() && grid1[xi][xj]==1){
                    grid1[xi][xj] = 0;
                    if(grid2[xi][xj]==1) grid2[xi][xj] = 2;
                    q.push({xi, xj});
                }
            }
        }
    }
    void bfs2(vector<vector<int>>& grid2, int i, int j, bool& check){
        queue<pair<int, int>> q;
        q.push({i, j});
        grid2[i][j] = 0;
        vector<int> d = {0, 1, 0, -1, 0};
        while(!q.empty()){
            auto x = q.front();
            q.pop();
            for(int p=0;p<4;p++){
                int xi = x.first+d[p];
                int xj = x.second+d[p+1];
                if(xi>=0 && xj>=0 && xi<grid2.size() && xj<grid2[0].size() && grid2[xi][xj]!=0){
                    if(grid2[xi][xj]==1) check = false;
                    else{
                        grid2[xi][xj] = 0;
                        q.push({xi, xj});    
                    }
                }
            }
        }
    }
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        for(int i=0;i<grid1.size();i++){
            for(int j=0;j<grid1[i].size();j++){
                if(grid1[i][j]==1){
                    bfs(grid1, grid2, i, j);
                }
            }
        }
        int ans = 0;
        for(int i=0;i<grid2.size();i++){
            for(int j=0;j<grid2[i].size();j++){
                if(grid2[i][j]==2){
                    bool check = true;
                    bfs2(grid2, i, j, check);
                    if(check) ans++;
                }
            }
        }
        return ans;
    }
};