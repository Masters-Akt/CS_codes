//Method - 1 - By altering The array
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                ans+=(nums[i-1]-nums[i]+1);
                nums[i]=nums[i-1]+1;
            }
        }
        return ans;
    }
};
//Method - 2 - By not altering The array
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans = 0, last = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=last){
                ans+=(last-nums[i]+1);
                last++;
            }else last = nums[i];
        }
        return ans;
    }
};