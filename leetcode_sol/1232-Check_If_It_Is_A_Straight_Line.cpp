class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int x = coordinates[1][0]-coordinates[0][0];
        int y = coordinates[1][1]-coordinates[0][1];
        for(int i=1;i<coordinates.size()-1;i++){
            int x1 = coordinates[i+1][0]-coordinates[i][0];
            int y1 = coordinates[i+1][1]-coordinates[i][1];
            if(x1==0){
                if(x!=0) return false;
            }else{
                if((double)y1/(double)x1 != (double)y/(double)x) return false;
            }
        }
        return true;
    }
};