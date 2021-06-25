//Method 1
//Using C++ STL inbuilt next_permutation function
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool temp = next_permutation(nums.begin(), nums.end());
    }
};