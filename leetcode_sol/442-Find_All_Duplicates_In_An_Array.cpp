class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> m;
        vector<int> ans;
        for(int x: nums){
            if(m[x]==1) ans.push_back(x);
            m[x]++;
        }
        return ans;
    }
};