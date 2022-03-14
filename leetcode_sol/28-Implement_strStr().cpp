class Solution {
public:
    int strStr(string haystack, string needle) {
        int x = haystack.find(needle);
        if(x==haystack.npos) return -1;
        return x;
    }
};