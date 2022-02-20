//Problem: https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1#
class Solution{
    private:
    void solve(vector<vector<int>>& m, vector<string>& ans, string temp, int i, int j, vector<vector<bool>>& vis){
        if(i>=0 && j>=0 && i<m.size() && j<m[0].size() && m[i][j]==1 && !vis[i][j]){
            if(i==m.size()-1 && j==m[0].size()-1){
                ans.push_back(temp);
            }
            vis[i][j] = true;
            solve(m, ans, temp+"U", i-1, j, vis);
            solve(m, ans, temp+"D", i+1, j, vis);
            solve(m, ans, temp+"L", i, j-1, vis);
            solve(m, ans, temp+"R", i, j+1, vis);
            vis[i][j] = false;
        }
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        // Your code goes here
        vector<string> ans;
        if(m[0][0]==0) return ans;
        string temp="";
        vector<vector<bool>> vis(m.size(), vector<bool>(m[0].size(), false));
        solve(m, ans, temp, 0, 0, vis);
        return ans;
    }
};