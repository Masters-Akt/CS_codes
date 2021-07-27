//Method 1
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        for(int i=0;i<words.size();i++){
            if(pattern.size()==words[i].size()){
                bool check = true;
                for(int j=0;j<pattern.size()-1;j++){
                    for(int k=j+1;k<pattern.size();k++){
                        if(pattern[j]==pattern[k] && words[i][j]!=words[i][k]){
                            check = false;
                            break;
                        }else if(pattern[j]!=pattern[k] && words[i][j]==words[i][k]){
                            check = false;
                            break;
                        }   
                    }
                }
                if(check) ans.push_back(words[i]);
            }
        }
        return ans;
    }
};

//Method 2
class Solution {
public:
    string mapfn(string s){
        unordered_map<char, int> m;
        for(char c : s) if(!m.count(c)) m[c]=m.size();
        for(int i=0;i<s.size();i++){
            s[i] = 'a' + m[s[i]];
        }
        return s;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        vector<string> ans;
        string p = mapfn(pattern);
        for(string s : words) if(mapfn(s)==p) ans.push_back(s);
        return ans;
    }
};