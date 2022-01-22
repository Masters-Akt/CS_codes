class Solution {
public:
    int minimumCost(vector<int>& cost) {
        if(cost.size()<=2){
            int sum = 0;
            for(int i=0;i<cost.size();i++) sum+=cost[i];
            return sum;
        }
        sort(cost.begin(), cost.end(), greater<int>());
        int ans = 0;
        for(int i=0;i<cost.size();i++){
            if(i%3!=2) ans+=cost[i];
        }
        return ans;
    }
};