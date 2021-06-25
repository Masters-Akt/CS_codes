//Method 1 - Brute Force - gives TLE
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int ans = 0;
        for(int i=0;i<prices.size()-1;i++){
            for(int j=i+1;j<prices.size();j++){
                ans = max(ans, prices[j]-prices[i]);
            }
        }
        return ans;
    }
};

//Method 2 - O(N)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int maxdif = 0, m = INT_MAX;
        for(int i=0;i<prices.size();i++){
            m = min(m, prices[i]);
            maxdif = max(maxdif, prices[i]-m);
        }
        return maxdif;
    }
};