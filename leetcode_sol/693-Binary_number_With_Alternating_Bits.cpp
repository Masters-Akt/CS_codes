class Solution {
public:
    bool hasAlternatingBits(int n) {
        if(n<2) return true;
        bool last_bit = n&1;
        n=n>>1;
        while(n){
            bool curr_bit = n&1;
            if(curr_bit==last_bit) return false;
            last_bit = curr_bit;
            n=n>>1;
        }
        return true;
    }
};