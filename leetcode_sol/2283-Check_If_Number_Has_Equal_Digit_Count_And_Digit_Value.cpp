class Solution {
public:
    bool digitCount(string num) {
        unordered_map<char, int> m;
        for(char x: num) m[x]++;
        for(char x: num){
            if(m[x]!=num[x-'0']-'0') return false;
        }
        return true;
    }
};