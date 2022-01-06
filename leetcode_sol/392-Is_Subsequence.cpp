class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_pointer = 0, t_pointer = 0;
        while(t_pointer<t.size()){
            if(s_pointer>=s.size()) return true;
            if(s[s_pointer]==t[t_pointer]) s_pointer++;
            t_pointer++;
        }
        if(s_pointer>=s.size()) return true;
        return false;
    }
};