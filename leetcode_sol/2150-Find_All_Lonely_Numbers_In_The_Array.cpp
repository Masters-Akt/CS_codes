class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int, int> m;
        vector<int> ans;
        for(int x: nums){
            m[x]++;
        }
        for(int x: nums){
            if(m[x]==1 && m[x-1]==0 && m[x+1]==0) ans.push_back(x);
        }
        return ans;
    }
};