class Solution {
public:
    string removeOccurrences(string s, string part) {
        int f = -1;
        while((f=s.find(part))!=string::npos){
            s.erase(f, part.size());
        }
        return s;
    }
};