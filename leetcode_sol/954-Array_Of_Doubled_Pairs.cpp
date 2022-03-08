class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        unordered_map<int, int> m;
        for(int& a: arr) m[a]++;
        vector<int> keys;
        for(auto& it: m) keys.push_back(it.first);
        sort(keys.begin(), keys.end(), [](int i, int j) {return abs(i) < abs(j);});
        for(int& x: keys){
            if(m[x]>m[2*x]) return false;
            m[2*x]-=m[x];
        }
        return true;
    }
};