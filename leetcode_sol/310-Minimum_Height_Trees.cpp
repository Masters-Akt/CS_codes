class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int> ans;
        if(n==1){
            ans.push_back(0);
            return ans;
        }
        vector<vector<int>> adj(n);
        vector<int> degree(n, 0);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            degree[edges[i][0]]++;
            degree[edges[i][1]]++;
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(degree[i]==1) q.push(i);
        }
        while(!q.empty()){
            ans.clear();
            int s = q.size();
            while(s--){
                int x = q.front();
                q.pop();
                ans.push_back(x);
                for(int i=0;i<adj[x].size();i++){
                    degree[adj[x][i]]--;
                    if(degree[adj[x][i]]==1) q.push(adj[x][i]);
                }
            }
        }
        return ans;
    }
};