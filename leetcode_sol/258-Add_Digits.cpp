class Solution {
public:
    int addDigits(int num) {
        while(num/10!=0){
            int n = 0;
            while(num){
                n+=num%10;
                num/=10;
            }
            num = n;
        }
        return num;
    }
};