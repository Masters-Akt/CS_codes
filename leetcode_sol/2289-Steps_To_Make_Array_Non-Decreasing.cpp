//M1 - Brute Force - TLE
class Solution {
public:
    int totalSteps(vector<int>& nums) {
        int total_steps = 0;
        while(1){
            vector<int> index_to_remove;
            for(int i=1;i<nums.size();i++){
                if(nums[i]<nums[i-1]){
                    index_to_remove.push_back(i);
                }
            }
            if(index_to_remove.size()==0) break;
            else{
                total_steps++;
                for(int i=index_to_remove.size()-1;i>=0;i--){
                    nums.erase(nums.begin()+index_to_remove[i]);
                }
            }
        }
        return total_steps;
    }
};