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
//Time Complexity = O(N!*N)
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