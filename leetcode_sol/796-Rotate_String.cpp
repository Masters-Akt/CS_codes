class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s==goal) return true;
        if(s.size()!=goal.size()) return false;
        s+=s;
        int f = s.find(goal);
        if(f>goal.size()) return false;
        return true;
    }
};