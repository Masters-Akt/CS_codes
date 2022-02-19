class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> ans;
        if(num%3==0){
            long long x = num/3;
            ans.push_back(x-1);
            ans.push_back(x);
            ans.push_back(x+1);
        }
        return ans;
    }
};