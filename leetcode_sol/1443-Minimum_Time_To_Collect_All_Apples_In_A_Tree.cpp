class Solution {
private:
    void dfs(vector<vector<int>>& adj, vector<bool>& hasApple, int node, int& ans, vector<bool>& vis){
        vis[node] = true;
        int s = adj[node].size();
        for(int i=s-1;i>=0;i--){
            int anscount = ans;
            if(!vis[adj[node][i]]) dfs(adj, hasApple, adj[node][i], ans, vis);
            if(anscount<ans) hasApple[node] = true;
            adj[node].pop_back();
        }
        if(hasApple[node] && adj[node].size()==0 && node!=0){
            ans+=2;
        }
    }
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>> adj(hasApple.size());
        for(auto x: edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        vector<bool> vis(hasApple.size(), false);
        int ans=0;
        dfs(adj, hasApple, 0, ans, vis);
        return ans;
    }
};