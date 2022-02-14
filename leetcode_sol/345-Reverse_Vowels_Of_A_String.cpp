class Solution {
private:
    bool isVowel(char x){
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U') return true;
        return false;
    }
public:
    string reverseVowels(string s) {
        int i=0, j=s.size()-1;
        while(i<j){
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if(!isVowel(s[i])) i++;
            else if(!isVowel(s[j])) j--;
            else i++, j--;
        }
        return s;
    }
};