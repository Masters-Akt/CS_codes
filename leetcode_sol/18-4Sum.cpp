//sorting + 2-pointers
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> sol;
        if(nums.empty()) return sol;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int next_target = target - nums[i] - nums[j];
                int front = j+1, back = n-1;
                while(front<back){
                    int two_sum = nums[front] + nums[back];
                    if(two_sum<next_target) front++;
                    else if(two_sum>next_target) back--;
                    else{
                        vector<int> temp = {nums[i], nums[j], nums[front], nums[back]};
                        sol.push_back(temp);
                        while(front<back && nums[front]==temp[2]) front++;
                        while(front<back && nums[back]==temp[3]) back--;
                    }
                }
                while(j+1<n && nums[j+1]==nums[j]) j++;
            }
            while(i+1<n && nums[i+1]==nums[i]) i++;
        }
        return sol;
    }
};