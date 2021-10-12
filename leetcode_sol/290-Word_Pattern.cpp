class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> store;
        string temp = "";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                store.push_back(temp);
                temp = "";
            }else{
                temp+=s[i];
            }
        }
        store.push_back(temp);
        if(store.size()!=pattern.size()) return false;
        map<string, char> m1;
        map<char, string> m2;
        for(int i=0;i<pattern.size();i++){
            if(m1.find(store[i])==m1.end()){
                m1[store[i]] = pattern[i];
            }else{
                if(pattern[i]!=m1[store[i]]) return false;
            }
            if(m2.find(pattern[i])==m2.end()){
                m2[pattern[i]] = store[i];
            }else{
                if(store[i]!=m2[pattern[i]]) return false;
            }
        }
        return true;
    }
};