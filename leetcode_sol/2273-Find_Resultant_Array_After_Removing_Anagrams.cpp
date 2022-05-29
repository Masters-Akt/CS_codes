class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        for(int i=0;i<words.size()-1;i++){
            vector<int> letter_freq_a(26, 0);
            for(char &letter: words[i]) letter_freq_a[letter-'a']++;
            vector<int> letter_freq_b(26, 0);
            for(char &letter: words[i+1]) letter_freq_b[letter-'a']++;
            if(letter_freq_a==letter_freq_b){
                words.erase(words.begin()+i+1);
                i--;
            }
        }
        return words;
    }
};