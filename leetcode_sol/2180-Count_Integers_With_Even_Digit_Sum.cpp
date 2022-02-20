class Solution {
public:
    int countEven(int num) {
        int sum = 0, temp = num;
        while(temp){
            sum+=temp%10;
            temp/=10;
        }
        if(sum%2==0) return num/2;
        return (num+1)/2-1;
    }
};