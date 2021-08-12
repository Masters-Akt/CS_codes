// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        unsigned int l=1, h=n;
        while(l<=h){
            unsigned int mid = (l+h)/2;
            if(isBadVersion(mid)){
                h = mid-1;
            }else{
                l = mid+1;
            }
        }
        return l;
    }
};