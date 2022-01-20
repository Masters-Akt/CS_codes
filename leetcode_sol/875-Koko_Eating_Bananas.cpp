class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = *max_element(piles.begin(), piles.end());
        while(left<right){
            int mid = (left+right)/2;
            int hour_spent = 0;
            for(int x: piles){
                hour_spent+=(x/mid+(x%mid!=0));
            }
            if(hour_spent<=h) right = mid;
            else left = mid+1;
        }
        return right;
    }
};