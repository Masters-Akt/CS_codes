class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int ans = 0, cursum = 0, cumsum = 0;
        for(int i=satisfaction.size()-1;i>=0;i--){
            cursum+=cumsum+satisfaction[i];
            cumsum+=satisfaction[i];
            ans = max(ans, cursum);
        }
        return ans;
    }
};