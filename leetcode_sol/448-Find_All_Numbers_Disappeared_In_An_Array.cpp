class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> check(nums.size(), true);
        for(int x: nums){
            check[x-1] = false;
        }
        vector<int> ans;
        for(int i=0;i<check.size();i++){
            if(check[i]) ans.push_back(i+1);
        }
        return ans;
    }
};