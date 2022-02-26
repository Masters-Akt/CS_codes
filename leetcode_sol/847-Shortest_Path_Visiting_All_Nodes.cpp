class Solution {
private:
    char dp[12][4096] = {};
    int dfs(vector<vector<int>>& graph, int visited, int i, int cnt){
        int res = graph.size()*2;    
        if(dp[i][visited]>0) return dp[i][visited]-1;
        if((visited & (1<<i)) == 0) ++cnt;
        if(cnt == graph.size()) return 0;        
        if(dp[i][visited] != -1){
            dp[i][visited] = -1;
            for (auto j : graph[i]) res = min(res, 1 + dfs(graph, visited | (1 << i), j, cnt));
            dp[i][visited] = res + 1;
        }
        return res;
    }
public:
    int shortestPathLength(vector<vector<int>>& graph, int res = INT_MAX) {
        if(graph.size()<4) return graph.size()-1;
        for(auto i=0;i<graph.size();i++){
            res = min(res, dfs(graph, 0, i, 0));
        }
        return res;
    }
};