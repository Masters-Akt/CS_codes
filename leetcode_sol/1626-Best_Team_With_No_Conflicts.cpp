class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        vector<pair<int, int>> store(scores.size()); 
        for(int i=0;i<scores.size();i++) store[i] = {ages[i], scores[i]};
        sort(store.begin(), store.end());
        int total = 0;
        vector<int> dp(store.size(), 0);
        for(int i=0;i<store.size();i++){
            dp[i] = store[i].second;
            for(int j=i-1;j>=0;j--){
                if(store[i].second >= store[j].second) dp[i] = max(dp[i], store[i].second+dp[j]);
            }
            total = max(total, dp[i]);
        }
        return total;
    }
};