class Solution {
public:
    int maxPower(string s) {
        int count = 1, ans = 0;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]) count++;
            else{
                ans = max(ans, count);
                count = 1;
            }
        }
        ans = max(ans, count);
        return ans;
    }
};