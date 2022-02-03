class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int, int> m;
        for(int x: nums1){
            for(int y: nums2){
                m[x+y]++;
            }
        }
        int ans = 0;
        for(int x: nums3){
            for(int y: nums4){
                if(m[0-x-y]) ans+=m[0-x-y];
            }
        }
        return ans;
    }
};