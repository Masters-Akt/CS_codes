class Solution {
private:
    static bool comp(pair<string, int>& a, pair<string, int>& b){
        if(a.second==b.second) return a.first<b.first;
        return a.second>b.second;
    }
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> m;
        for(string x: words) m[x]++;
        vector<pair<string, int>> v;
        for(auto x: m) v.push_back({x.first, x.second});
        sort(v.begin(), v.end(), comp);
        vector<string> ans;
        for(int i=0;i<k;i++) ans.push_back(v[i].first);
        return ans;
    }
};