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

//Another way of writing the same thing
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
       int countodd = 0, counteven = 0;
        for(auto &it: position){
            countodd+=(it&1);
            counteven+=(!(it&1));
        }
        return min(countodd, counteven);
    }
};