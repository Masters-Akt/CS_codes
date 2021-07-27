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