class Solution {
private:
    bool dfs(vector<vector<int>>& graph, vector<int>& dp, int index){
        if(dp[index]) return 1==dp[index];
        dp[index] = -1;
        for(auto& n: graph[index]) if(dfs(graph, dp, n)==false) return false;
        return dp[index] = 1;
    }
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> dp(graph.size(), 0);
        vector<int> ans;
        for(int i=0;i<graph.size();i++) if(dfs(graph, dp, i)) ans.push_back(i);
        return ans;
    }
};