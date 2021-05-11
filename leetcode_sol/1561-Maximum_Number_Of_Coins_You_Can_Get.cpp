class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end(), greater<int>());
        int sum=0;
        for(int i=0;i<piles.size()/3;i++) sum+=(piles[2*i+1]);
        return sum;
    }
};