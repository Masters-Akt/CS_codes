class Solution {
private:
    static bool comp(pair<int, int>& a, pair<int, int>& b){
        if(a.second==b.second) return a.first>b.first;
        return a.second<b.second;
    }
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int x: nums) m[x]++;
        vector<pair<int, int>> v;
        for(auto x: m) v.push_back({x.first, x.second});
        sort(v.begin(), v.end(), comp);
        vector<int> ans;
        for(auto x: v){
            for(int i=0;i<x.second;i++) ans.push_back(x.first);
        }
        return ans;
    }
};