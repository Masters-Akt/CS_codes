class Solution {
public:
    int countBinarySubstrings(string s) {
        int cur=1, prev=0, ans = 0;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]) cur++;
            else{
                ans+=min(prev, cur);
                prev = cur;
                cur = 1;
            }
        }
        ans+=min(prev, cur);
        return ans;
    }
};