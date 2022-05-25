//Method - LIS(Longest Increasing Subsequence)
class Solution {
private:
    static bool comp(vector<int>& a, vector<int>& b){
        if(a[0]==b[0]) return a[1]>b[1];
        return a[0]<b[0];
    }
public:
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        vector<int> dp;
        sort(envelopes.begin(), envelopes.end(), comp);
        for(auto e: envelopes){
            auto it = lower_bound(dp.begin(), dp.end(), e[1]);
            if(it==dp.end()) dp.push_back(e[1]);
            else *it = e[1];
        }
        return dp.size();
    }
};