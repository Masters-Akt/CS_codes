//Method 1
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                i--;
                count++;
            }
        }
        while(count--){
            nums.push_back(0);
        }
    }
};

//Method 2
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        int c = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) c++;
            else temp.push_back(nums[i]);
        }
        while(c--){
            temp.push_back(0);
        }
        nums = temp;
    }
};