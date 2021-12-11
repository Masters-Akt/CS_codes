class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int countodd=0, counteven=0;
        for(int i=0;i<position.size();i++){
            if(position[i]%2==0) counteven++;
            else countodd++;
        }
        return min(countodd, counteven);
    }
};