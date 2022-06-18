class WordFilter {
private:
    unordered_map<string, int> m;
public:
    WordFilter(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            for(int j=1;j<=words[i].size();j++){
                for(int k=0;k<words[i].size();k++){
                    m[words[i].substr(0, j) + "@" + words[i].substr(k, words[i].size())] = i+1;
                }
            }
        }
    }
    
    int f(string prefix, string suffix) {
        return m[prefix + "@" + suffix]-1;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */