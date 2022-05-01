class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> count(1001, 0);
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                count[nums[i][j]]++;
            }
        }
        int n = nums.size();
        vector<int> ans;
        for(int i=1;i<1001;i++){
            if(count[i]==n) ans.push_back(i);
        }
        return ans;
    }
};