//Method 1
//Using C++ STL inbuilt next_permutation function
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        bool temp = next_permutation(nums.begin(), nums.end());
    }
};

//Method 2
//Generate all permutations, then search for the current one and return the next one
//Time Complexity = O(N!)
//Space Complexity = O(N)
//Gives TLE
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());
        vector<vector<int>> store;
        do{
            store.push_back(temp);
        }while(next_permutation(temp.begin(), temp.end()));
        for(int i=0;i<store.size();i++){
            if(store[i]==nums){
                if(i==store.size()-1) nums = store[0];
                else nums = store[i+1];
                break;
            }
        }
    }
};

//Method 3 - Efficient O(N) - Single Pass Approach
/*
Algorithm:
1. Search for the first digit which is less than its immediate right starting from rear end
2. Search for a digit which is greater than the above found digit
3. Swap both of them
4. Reverse everything on the right of first found digit
Edge Case: If no such digit is found in first step, simply reverse the whole number
*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i;
        for(i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]) break;
        }
        if(i>=0){
            for(int j=nums.size()-1;j>i;j--){
                if(nums[j]>nums[i]){
                    swap(nums[i], nums[j]);
                    break;
                }
            }
        }
        reverse(nums.begin()+i+1, nums.end());
    }
};