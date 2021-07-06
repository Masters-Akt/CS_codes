class Solution {
public:
    int countOdds(int low, int high) {
        if(low%2==0){
            if(high%2==0) return (high-low)/2;
            return (high-low)/2+1;
        }
        return (high-low)/2+1;
    }
};