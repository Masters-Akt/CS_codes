class Solution {
private:
    int solve(int n, unordered_map<int, int>& dp){
        if(dp[n] || n==1) return dp[n];
        if(n%2==0) dp[n] = 1+solve(n/2, dp);
        else dp[n] = 1+solve(3*n+1, dp);
        return dp[n];
    }
public:
    int getKth(int lo, int hi, int k) {
        unordered_map<int, int> dp;
        vector<pair<int, int>> store;
        for(int i=lo;i<=hi;i++) store.push_back({solve(i, dp), i});
        sort(store.begin(), store.end());
        return store[k-1].second;
    }
};