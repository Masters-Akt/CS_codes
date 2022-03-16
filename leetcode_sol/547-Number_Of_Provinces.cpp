class Solution {
private:
    void solve(vector<bool>& vis, vector<vector<int>>& temp, int i){
        for(int j=0;j<temp.size();j++){
            if(temp[i][j]==1 && !vis[j]){
                vis[j] = true;
                solve(vis, temp, j);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans = 0;
        vector<bool> vis(isConnected.size(), false);
        for(int i=0;i<isConnected.size();i++){
            if(!vis[i]){
                ans++;
                solve(vis, isConnected, i);
            }
        }
        return ans;
    }
};