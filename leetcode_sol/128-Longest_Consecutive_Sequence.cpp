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