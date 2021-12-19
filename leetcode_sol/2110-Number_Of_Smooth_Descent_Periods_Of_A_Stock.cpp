class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans = prices.size();
        int j = 1;
        for(int i=1;i<prices.size();i++){
            if(prices[i]-prices[i-1]==-1) ans+=j++;
            else j=1;
        }
        return ans;
    }
};