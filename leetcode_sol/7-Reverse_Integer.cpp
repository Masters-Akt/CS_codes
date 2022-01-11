//Method
class Solution {
public:
    int reverse(int x) {
        long long res = 0;
        while(x){
            res = res*10 + x%10;
            x/=10;
        }
        return (res<INT_MIN || res>INT_MAX)?0:res;
    }
};

//Same method without using long long
class Solution {
public:
    int reverse(int x) {
        int ans = 0;
        while(x){
            if(ans>INT_MAX/10 || ans<INT_MIN/10) return 0;
            ans = ans*10+x%10;
            x/=10;
        }
        return ans;
    }
};