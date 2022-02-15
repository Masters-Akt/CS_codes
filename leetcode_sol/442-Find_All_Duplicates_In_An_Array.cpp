//TC = O(N) SC = O(N)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> m;
        vector<int> ans;
        for(int x: nums){
            if(m[x]==1) ans.push_back(x);
            m[x]++;
        }
        return ans;
    }
};

//TC = O(N) SC = O(1)
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])-1]<0) ans.push_back(abs(nums[i]));
            nums[abs(nums[i])-1]*=-1;
        }
        return ans;
    }
};