class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        string ans = "";
        sort(strs.begin(), strs.end());
        string start = strs[0], end = strs[strs.size()-1];
        for(int i=0;i<start.size();i++){
            if(start[i]==end[i]) ans = ans + start[i];
            else break;
        }
        return ans;
    }
};