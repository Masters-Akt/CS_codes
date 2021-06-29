//Method 1
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(), nums.end());
        int cm = 1, c = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                nums.erase(nums.begin()+i);
                i--;
                continue;
            }
            if(nums[i]-1==nums[i-1]){
                c++;
            }else{
                cm = max(cm, c);
                c = 1;
            }
        }
        cm = max(c,cm);
        return cm;
    }
};

//Method 2 - Hashset - O(N) as hasset retrieval is O(1) in average case
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Hash Set
        set<int> hashset;
        for(int num: nums) hashset.insert(num);
        int longest_streak = 0;
        for(int num: nums){
            if(!hashset.count(num-1)){
                int curr_streak = 1, currnum = num;
                while(hashset.count(currnum+1)){
                    currnum++;
                    curr_streak++;
                }
                longest_streak = max(longest_streak, curr_streak);
            }
        }
        return longest_streak;
    }
};