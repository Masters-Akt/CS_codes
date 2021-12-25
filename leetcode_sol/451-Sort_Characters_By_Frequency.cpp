class Solution {
private:
    static bool comp(pair<char, int>& a, pair<char, int>& b){
        if(a.first>='A' && a.first<='Z' && b.first>='a' && b.first<='z'){
            if(a.second==b.second) return false;
            return a.second>b.second;
        }
        if(a.first>='a' && a.first<='z' && b.first>='A' && b.first<='Z'){
            if(a.second==b.second) return true;
            return a.second>b.second;
        }
        if(b.second==a.second) return a.first<b.first;
        return a.second>b.second;
    }
public:
    string frequencySort(string s) {
        unordered_map<char, int> m;
        for(char x: s) m[x]++;
        vector<pair<char, int>> v;
        for(auto x: m) v.push_back({x.first, x.second});
        sort(v.begin(), v.end(), comp);
        string ans = "";
        for(auto x: v){
            for(int i=0;i<x.second;i++) ans+=x.first;
        }
        return ans;
    }
};