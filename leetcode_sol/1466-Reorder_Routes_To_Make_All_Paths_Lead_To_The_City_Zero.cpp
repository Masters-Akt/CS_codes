class Solution {
private:
    int dfs(vector<vector<int>> &al, vector<bool> &visited, int from) {
        auto change = 0;
        visited[from] = true;
        for(auto to: al[from]) if(!visited[abs(to)]) change+=dfs(al, visited, abs(to))+(to > 0);
        return change;        
    }
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>> al(n);
        for(auto &c : connections){
            al[c[0]].push_back(c[1]);
            al[c[1]].push_back(-c[0]);
        }
        return dfs(al, vector<bool>(n) = {}, 0);
    }
};