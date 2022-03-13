class Solution {
private:
    bool solve(vector<vector<int>>& g, int srow, int scol, int erow, int ecol){
        for(int i=srow;i<=erow;i++){
            for(int j=scol;j<=ecol;j++){
                if(g[i][j]==0) return false;
            }
        }
        return true;
    }
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
        vector<vector<int>> g(n, vector<int>(n, 0));
        for(int i=0;i<dig.size();i++){
            g[dig[i][0]][dig[i][1]] = 1;
        }
        int ans = 0;
        for(int i=0;i<artifacts.size();i++){
            if(solve(g, artifacts[i][0], artifacts[i][1], artifacts[i][2], artifacts[i][3])) ans++;
        }
        return ans;
    }
};