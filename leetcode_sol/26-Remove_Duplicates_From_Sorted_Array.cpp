//M1 - By actually removing the elements
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};

//M2 - By shifting the elements to one side
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int i = 0;
        for(int j=1; j<nums.size(); j++){
            if(nums[j]!=nums[i]){
                nums[++i] = nums[j];
            }
        }
        return i+1;
    }
};