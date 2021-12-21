//Method 1 - Using C++ STL Rotate function
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()<=k) k%=nums.size();
        std::rotate(nums.begin(), nums.begin()+nums.size()-k, nums.end());
    }
};

//Method 2
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(k>nums.size()) k=k%nums.size();
        vector<int> temp;
        int i = nums.size()-1;
        while(k--){
            temp.push_back(nums[i--]);
            nums.pop_back();
        }
        reverse(temp.begin(), temp.end());
        for(int i=0;i<nums.size();i++){
            temp.push_back(nums[i]);
        }
        nums = temp;
    }
};