class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int> p(piles.begin(), piles.end());
        int sum = 0;
        for(int i=0;i<piles.size();i++){
            sum+=piles[i];
        }
        while(k--){
            int temp = p.top();
            p.pop();
            p.push(temp-temp/2);
            sum-=(temp/2);
        }
        return sum;
    }
};