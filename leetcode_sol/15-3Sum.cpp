//M1 - TC = O(N^2 logM) SC = O(M)+O(N), m is being used for set - TLE
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> ans;
        unordered_map<int, int> m;
        for(int x: nums) m[x]++;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]--;
            for(int j=i+1;j<nums.size();j++){
                m[nums[j]]--;
                if(m[(-1)*(nums[i]+nums[j])]!=0){
                    vector<int> temp = {nums[i], nums[j], (-1)*(nums[i]+nums[j])};
                    sort(temp.begin(), temp.end());
                    ans.insert(temp);
                }
                m[nums[j]]++;
            }
            m[nums[i]]++;
        }
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};

//M2 - Accepted - Two Pointer
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if(nums.size()<3) return {};
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size()-2;i++){
            if(i==0 || (i>0 && nums[i]!=nums[i-1])){
                int high = nums.size()-1, low = i+1;
                while(low<high){
                    if(nums[low]+nums[high] == 0-nums[i]){
                        ans.push_back({nums[i], nums[low], nums[high]});
                        while(low<high && nums[low]==nums[low+1]) low++;
                        while(low<high && nums[high]==nums[high-1]) high--;
                        low++;
                        high--;
                    }else if(nums[low]+nums[high]<0-nums[i]) low++;
                    else high--;
                }
            }
        }
        return ans;
    }
};