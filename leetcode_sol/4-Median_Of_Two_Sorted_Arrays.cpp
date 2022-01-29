class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()<nums2.size()) return findMedianSortedArrays(nums2, nums1);
        int low = 0, high = nums2.size()*2;
        while(low<=high){
            int mid2 = (low+high)/2;
            int mid1 = nums1.size()+nums2.size()-mid2;
            double l1 = (mid1==0) ? INT_MIN : nums1[(mid1-1)/2];
            double l2 = (mid2==0) ? INT_MIN : nums2[(mid2-1)/2];
            double r1 = (mid1==nums1.size()*2) ? INT_MAX : nums1[mid1/2];
            double r2 = (mid2==nums2.size()*2) ? INT_MAX : nums2[mid2/2];
            if(l1>r2) low = mid2+1;
            else if(l2>r1) high = mid2-1;
            else return (max(l1, l2) + min(r1, r2))/2;
        }
        return -1;
    }
};