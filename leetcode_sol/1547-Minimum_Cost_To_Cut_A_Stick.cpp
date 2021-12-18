class Solution {
private:
    int minCost(vector<int>& cuts, vector<vector<int>>& dp, int left, int right){
        //cout<<left<<" "<<right<<"\n";
        if(left+1==right) return 0;
        if(dp[left][right]!=-1) return dp[left][right];
        int ans = INT_MAX;
        for(int i=left+1; i<right; i++){
            ans = min(ans, cuts[right]-cuts[left]+minCost(cuts, dp, left, i)+ minCost(cuts, dp, i, right));
        }
        return dp[left][right] = ans;
    }
public:
    int minCost(int n, vector<int>& cuts) {
        vector<vector<int>> dp(102, vector<int>(102, -1));
        cuts.push_back(0);
        cuts.push_back(n);
        sort(cuts.begin(), cuts.end());
        return minCost(cuts, dp, 0, cuts.size()-1);
    }
};