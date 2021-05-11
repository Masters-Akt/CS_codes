class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int c=0;
        for(int i=nums1.size()-1;i>=0;i--){
            if(c==n) break;
            nums1.erase(nums1.begin()+i);
            c++;
        }
        for(int i=0;i<n;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(), nums1.end());
    }
};