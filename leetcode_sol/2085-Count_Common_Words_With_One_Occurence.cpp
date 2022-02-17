class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> first, second;
        for(auto& x: words1) first[x]++; 
        for(auto& x: words2) second[x]++; 
        int ans = 0; 
        for(auto& x: first) if(x.second==1 && second[x.first]==1) ans++; 
        return ans; 
    }
};