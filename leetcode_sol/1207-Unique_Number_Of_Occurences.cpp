class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> m;
        for(int x: arr) m[x]++;
        map<int, int> m2;
        for(auto x: m) m2[x.second]++;
        for(auto x: m2){
            if(x.second>1) return false;
        }
        return true;
    }
};