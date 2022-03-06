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