//Method 1 - Using C++ STL Rotate function
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()<=k) k%=nums.size();
        std::rotate(nums.begin(), nums.begin()+nums.size()-k, nums.end());
    }
};