class Solution {
private:
    int dfs(vector<vector<int>>& children, int headID, vector<int>& informTime){
        int ans = 0;
        for(int& x: children[headID]) ans = max(ans, dfs(children, x, informTime));
        return informTime[headID]+ans;
    }
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> children(n);
        for(int i=0;i<manager.size();i++){
            if(manager[i]!=-1) children[manager[i]].push_back(i);
        }
        return dfs(children, headID, informTime);
    }
};