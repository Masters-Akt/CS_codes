//Method - 1
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[i]*nums[i]);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//Method - 2 -> Two pointers
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        int start = 0, end = nums.size()-1;
        int index = nums.size()-1;
        while(start<=end){
            if(nums[start]*nums[start]>nums[end]*nums[end]){
                ans[index--] = nums[start]*nums[start];
                start++;
            }else{
                ans[index--] = nums[end]*nums[end];
                end--;
            }
        }
        return ans;
    }
};