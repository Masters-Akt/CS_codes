class Solution {
public:
    int getLucky(string s, int k) {
        int number = 0;
        for(char x: s){
            int p = (x-'a'+1);
            while(p){
                number+=p%10;
                p/=10;
            }
        }
        k--;
        while(k--){
            int num = 0;
            while(number){
                num+=number%10;
                number/=10;
            }
            number = num;
        }
        return number;
    }
};