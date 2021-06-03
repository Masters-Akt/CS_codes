class Solution {
public:
    int findint(string s){
        string ans = "";
        for(int i=0;i<s.size();i++){
            ans+=to_string((int)s[i]-97);
        }
        return stoi(ans);
    }
    
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        if(findint(firstWord)+findint(secondWord)==findint(targetWord)) return true;
        return false;
    }
};