class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int sum=0,c=0;
        for(int i=0;i<costs.size();i++){
            sum+=costs[i];
            c++;
            if(sum==coins) break;
            if(sum>coins){
                sum-=costs[i];
                c--;
                break;
            }
        }
        return c;
    }
};