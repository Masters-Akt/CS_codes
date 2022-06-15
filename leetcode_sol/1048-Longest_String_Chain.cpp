class Solution {
private:
    static bool comp(const string& s1, const string& s2){
        return s1.size()<s2.size();
    }
public:
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), comp);
        unordered_map<string, int> dp;
        int ans = 0;
        for(string x: words){
            for(int i=0;i<x.size();i++){
                string prev = x.substr(0, i)+x.substr(i+1);
                dp[x] = max(dp[x], dp[prev]==0 ? 1 : dp[prev]+1);
            }
            ans = max(ans, dp[x]);
        }
        return ans;
    }
};