class Solution {
private:
    int dfs(vector<int>& arr, int d, int index, vector<int>& dp){
        if(dp[index]) return dp[index];
        int answer = 1;
        for(int j=index+1;j<=min(index+d, (int)arr.size()-1) && arr[j]<arr[index];++j){
            answer = max(answer, 1+dfs(arr, d, j, dp));
        }
        for(int j=index-1;j>=max(index-d, 0) && arr[j]<arr[index];--j){
            answer = max(answer, 1+dfs(arr, d, j, dp));
        }
        return dp[index] = answer;
    }
public:
    int maxJumps(vector<int>& arr, int d) {
        vector<int> dp(1001, 0);
        int n = arr.size();
        int answer = 1;
        for(int i=0;i<arr.size();i++) answer = max(answer, dfs(arr, d, i, dp));
        return answer;
    }
};