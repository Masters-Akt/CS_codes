class Solution {
private:
    void solve(vector<vector<int>>& graph, vector<vector<int>>& ans, vector<int>& temp, int node){
        temp.push_back(node);
        if(node==graph.size()-1){
            ans.push_back(temp);
        }else{
            for(int i=0;i<graph[node].size();i++){
                solve(graph, ans, temp, graph[node][i]);
            }
        }
        temp.pop_back();
    }
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(graph, ans, temp, 0);
        return ans;
    }
};