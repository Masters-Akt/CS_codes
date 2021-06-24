//By using sort function
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    }
};

//Without Using Sort Function

//Method 2 = Using Counting Sort

//Method 3 = Dutch National Flag Algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low++], nums[mid++]);
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums[mid], nums[high--]);
            }
        }
    }
};