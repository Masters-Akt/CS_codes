class Solution {
public:
    int countDigits(int num) {
        int duplicateNum = num;
        int numberOfDigitsThatDivideNum = 0;
        while(duplicateNum){
            int digit = duplicateNum%10;
            if(num%digit==0) numberOfDigitsThatDivideNum++;
            duplicateNum/=10;
        }
        return numberOfDigitsThatDivideNum;
    }
};