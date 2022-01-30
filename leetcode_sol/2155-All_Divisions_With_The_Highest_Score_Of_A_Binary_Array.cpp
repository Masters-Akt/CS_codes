class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        vector<int> ans;
        vector<int> s1(nums.size()+2);
        vector<int> s2(nums.size()+2);
        s1[0] = 0;
        s2[nums.size()] = 0;
        for(int i=1;i<=nums.size();i++){
            if(nums[i-1]) s1[i] = s1[i-1];
            else s1[i] = s1[i-1]+1;
        }
        for(int i=nums.size();i>0;i--){
            if(nums[i-1]) s2[i-1] = s2[i]+1;
            else s2[i-1] = s2[i];
        }
        vector<int> s3(nums.size()+2);
        for(int i=0;i<s3.size();i++){
            s3[i] = s1[i]+s2[i];
        }
        int ma = *max_element(s3.begin(), s3.end());
        for(int i=0;i<s3.size();i++){
            if(s3[i]==ma) ans.push_back(i);
        }
        return ans;
    }
};