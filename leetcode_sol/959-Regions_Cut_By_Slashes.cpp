class Solution {
private:
    void solve(vector<vector<int>>& mat, int i, int j){
        queue<pair<int, int>> q;
        q.push({i, j});
        mat[i][j] = -1;
        vector<int> d = {0, 1, 0, -1, 0};
        while(!q.empty()){
            auto x = q.front();
            q.pop();
            for(int p=0;p<4;p++){
                int xi = x.first+d[p];
                int yi = x.second+d[p+1];
                if(xi>=0 && yi>=0 && xi<mat.size() && yi<mat[0].size() && mat[xi][yi]==0){
                    mat[xi][yi] = -1;
                    q.push({xi, yi});
                }
            }
        }
    }
public:
    int regionsBySlashes(vector<string>& grid) {
        vector<vector<int>> mat(3*grid.size(), vector<int>(3*grid.size(), 0));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='/'){
                    int x = 3*i, y = 3*j;
                    mat[x][y+2] = mat[x+1][y+1] = mat[x+2][y] = -1;
                }else if(grid[i][j]=='\\'){
                    int x = 3*i, y = 3*j;
                    mat[x][y] = mat[x+1][y+1] = mat[x+2][y+2] = -1;
                }
            }
        }
        int ans = 0;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==0){
                    ans++;
                    solve(mat, i, j);
                }
            }
        }
        return ans;
    }
};