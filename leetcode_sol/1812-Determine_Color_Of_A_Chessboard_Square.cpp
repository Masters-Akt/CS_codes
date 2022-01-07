class Solution {
public:
    bool squareIsWhite(string coordinates) {
        if((coordinates[0]-'a')%2==0){
            if((coordinates[1]-'0')%2==0) return true;
            return false;
        }else{
            if((coordinates[1]-'0')%2==0) return false;
            return true;
        }
    }
};