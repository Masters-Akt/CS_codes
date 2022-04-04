class Solution {
public:
    bool isPerfectSquare(int num) {
        if((int)sqrt(num)*(int)sqrt(num)==num) return true;
        return false;
    }
};