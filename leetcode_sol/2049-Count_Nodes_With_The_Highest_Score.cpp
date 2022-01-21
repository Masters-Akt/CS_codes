class Solution {
private:
    int solve(vector<vector<int>>& adj, long long& ans, int node, int size, long long& curr_ans){
        int node_count = 1;
        long long p = 1;
        for(auto x: adj[node]){
            int res = solve(adj, ans, x, size, curr_ans);
            node_count+=res;
            p*=res;
        }
        int leftover_nodes = size-node_count;
        if(leftover_nodes>0) p*=leftover_nodes;
        if(p>curr_ans){
            curr_ans = p;
            ans = 0;
        }
        if(p==curr_ans) ans++;
        return node_count;
    }
public:
    int countHighestScoreNodes(vector<int>& parents) {
        vector<vector<int>> adj(parents.size());
        for(int i=1;i<parents.size();i++){
            adj[parents[i]].push_back(i);
        }
        long long ans = 0, curr_ans = 0;
        int size = parents.size();
        solve(adj, ans, 0, size, curr_ans);
        return ans;
    }
};