class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> store;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]) store.push_back(i);
        }
        if(store.size()>2 || store.size()==1) return false;
        if(store.size()==0) return true;
        if(s1[store[0]]==s2[store[1]] && s1[store[1]]==s2[store[0]]) return true;
        return false;
    }
};