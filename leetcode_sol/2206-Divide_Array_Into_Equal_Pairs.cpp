class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> m;
        for(auto x: nums) m[x]++;
        for(auto x: m){
            if(x.second%2) return false;
        }
        return true;
    }
};