class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int ans = 0;
        vector<vector<int>> temp(nums1.size()+1, vector<int>(nums2.size()+1, 0));
        for(int i=nums1.size()-1;i>=0;i--){
            for(int j=nums2.size()-1;j>=0;j--){
                if(nums1[i]==nums2[j]){
                    temp[i][j] = temp[i+1][j+1]+1;
                    if(ans<temp[i][j]) ans = temp[i][j];
                }
            }
        }
        return ans;
    }
};