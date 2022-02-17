class Solution {
public:
    vector<int> advantageCount(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size());
        sort(nums1.begin(), nums1.end());
        vector<pair<int, int>> store(nums2.size());
        for(int i=0;i<nums2.size();i++){
            store[i] = {nums2[i], i};
        }
        sort(store.begin(), store.end());
        int left = 0, right = nums1.size()-1;
        for(int i=store.size()-1;i>=0;i--){
            if(nums1[right]<=store[i].first){
                ans[store[i].second] = nums1[left++];
            }else{
                ans[store[i].second] = nums1[right--];
            }
        }
        return ans;
    }
};