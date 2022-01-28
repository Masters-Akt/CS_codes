class WordDictionary {
private:
    unordered_map<int, vector<string>> m;
    bool isFound(string a, string b){
        for(int i=0;i<a.size();i++){
            if(b[i]=='.') continue;
            if(a[i]!=b[i]) return false;
        }
        return true;
    }
public:
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        m[word.size()].push_back(word);
    }
    
    bool search(string word) {
        for(auto s: m[word.size()]) if(isFound(s, word)) return true;
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */