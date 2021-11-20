//Method 1 - TC = O(N2) SC = O(1)
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for(int x: nums){
            int occ = 0;
            for(int y: nums){
                occ+=(x==y);
            }
            if(occ==1) return x;
        }
        return -1;
    }
};