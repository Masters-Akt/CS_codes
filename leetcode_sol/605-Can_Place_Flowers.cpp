class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i=0, ans = 0;
        while(i<flowerbed.size()){
            if(flowerbed[i]==0 && (i==0 || flowerbed[i-1]==0) && (i==flowerbed.size()-1 || flowerbed[i+1]==0)){
                flowerbed[i] = 1;
                ans++;
            }
            if(ans>=n) return true;
            i++;
        }
        return ans>=n;
    }
};