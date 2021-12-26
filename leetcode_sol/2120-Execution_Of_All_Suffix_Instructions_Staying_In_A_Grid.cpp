class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int> ans(s.size(), 0);
        for(int i=0;i<s.size();i++){
            int x = startPos[0], y = startPos[1];
            int c = 0;
            for(int j=i;j<s.size();j++){
                if(s[j]=='U') x--;
                else if(s[j]=='D') x++;
                else if(s[j]=='R') y++;
                else y--;
                if(x>=0 && y>=0 && x<n && y<n) c++;
                else break;
            }
            ans[i] = c;
        }
        return ans;
    }
};