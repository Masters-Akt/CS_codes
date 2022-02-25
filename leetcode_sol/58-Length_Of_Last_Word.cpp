class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string str;
        while(ss>>str) continue;
        return str.size();
    }
};