//Sliding Window
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int p=1, ans = 0;
        int i=0;
        for(int j=0;j<nums.size();j++){
            p*=nums[j];
            while(p>=k){
                p/=nums[i];
                i++;
            }
            ans+=(j-i+1);
        }
        return ans;
    }
};

//Cleaner code for sliding window approach
class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1) return 0;
        int prod = 1, ans = 0, left_pointer = 0;
        for(int right_pointer=0; right_pointer<nums.size();right_pointer++){
            prod*=nums[right_pointer];
            while(prod>=k){
                prod/=nums[left_pointer];
                left_pointer++;
            }
            ans+=(right_pointer-left_pointer+1);
        }
        return ans;
    }
};