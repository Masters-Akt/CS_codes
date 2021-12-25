class Solution {
private:
    static bool comp(pair<int, int>& a, pair<int, int>& b){
        return a.second>b.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        for(int x: nums) m[x]++;
        vector<pair<int, int>> v;
        for(auto x: m) v.push_back({x.first, x.second});
        sort(v.begin(), v.end(), comp);
        vector<int> ans;
        for(int i=0;i<k;i++) ans.push_back(v[i].first);
        return ans;
    }
};