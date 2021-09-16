class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, ten = 0, twenty = 0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5) five++;
            else if(bills[i]==10){
                if(five==0) return false;
                five--;
                ten++;
            }else{
                if(!(five>=3 || (ten>=1 && five>=1))) return false;
                if(ten>=1 && five>=1){
                    twenty++;
                    ten--;
                    five--;
                }else{
                    twenty++;
                    five-=3;
                }
            }
        }
        return true;
    }
};