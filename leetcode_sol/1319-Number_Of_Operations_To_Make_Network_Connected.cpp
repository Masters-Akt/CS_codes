class Solution {
private:
    void dfs(vector<vector<int>>& adj, vector<bool>& vis, int i){
        vis[i] = true;
        for(int x: adj[i]) if(!vis[x]) dfs(adj, vis, x);
    }
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1) return -1;
        vector<vector<int>> adj(n);
        for(auto& edge: connections){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<bool> vis(n, false);
        int non_connected_components = 0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                non_connected_components++;
                dfs(adj, vis, i);
            }
        }
        return non_connected_components-1;
    }
};