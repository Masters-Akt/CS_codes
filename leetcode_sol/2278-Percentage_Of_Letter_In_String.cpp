class Solution {
public:
    int percentageLetter(string s, char letter) {
        int freq_of_letter = 0;
        for(char &character: s){
            if(character==letter) freq_of_letter++;
        }
        return (freq_of_letter*100)/(int)s.size();
    }
};