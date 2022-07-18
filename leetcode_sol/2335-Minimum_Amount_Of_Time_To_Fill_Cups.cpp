class Solution {
public:
    int fillCups(vector<int>& amount) {
        int max_quantity=0, sum_of_cups=0;
        for(int x: amount){
            sum_of_cups+=x;
            max_quantity = max(max_quantity, x);
        }
        return max(max_quantity, (sum_of_cups+1)/2);
    }
};