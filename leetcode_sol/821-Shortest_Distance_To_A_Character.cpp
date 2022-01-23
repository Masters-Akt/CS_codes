class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> ans;
        int prev = -s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]==c) prev = i;
            ans.push_back(i-prev);
        }
        for(int i=prev;i>=0;i--){
            if(s[i]==c) prev = i;
            ans[i]=min(ans[i], prev-i);
        }
        return ans;
    }
};