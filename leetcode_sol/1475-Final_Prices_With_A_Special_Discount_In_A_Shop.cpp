class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        for(int i=0;i<prices.size()-1;i++){
            bool ch=false;
            int temp=prices[i];
            for(int j=i+1;j<prices.size();j++){
                if(prices[j]<=temp){
                    temp=prices[j];
                    ch=true;
                    break;
                }
            }
            if(ch==true){
                prices[i]=prices[i]-temp;
            }
        }
        return prices;
    }
};