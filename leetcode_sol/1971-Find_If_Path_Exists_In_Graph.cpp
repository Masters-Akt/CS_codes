class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        queue<int> q;
        vector<bool> vis(n, false);
        q.push(source);
        vis[source] = true;
        while(!q.empty()){
            int s = q.size();
            while(s--){
                int x = q.front();
                q.pop();
                if(x==destination) return true;
                for(auto edge: adj[x]){
                    if(!vis[edge]){
                        q.push(edge);
                        vis[edge] = true;   
                    }
                }
            }
        }
        return false;
    }
};