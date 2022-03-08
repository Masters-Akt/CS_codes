class Solution {
private:
    bool isVowel(char x){
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u') return true;
        return false;
    }
public:
    int countVowelSubstrings(string word) {
        int ans = 0, count = 0;
        unordered_map<char, int> m;
        for(int i=0;i<word.size();i++){
            m.clear();
            for(int j=i;j<word.size();j++){
                if(isVowel(word[j])){
                    m[word[j]]++;
                    if(m.size()==5) ans++;
                }else break;
            }
        }
        return ans;
    }
};