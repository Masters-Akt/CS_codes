class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<int, int> m;
        for(char x: s){
            if(m[x]) return x;
            m[x]=1;
        }
        return -1;
    }
};