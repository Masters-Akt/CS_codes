class Solution {
public:
    int minTimeToType(string word) {
        int c = 0;
        char p = 'a';
        for(int i=0;i<word.size();i++){
            if(abs(p-word[i])<=12) c+=abs(p-word[i]);
            else c+=(26-abs(p-word[i]));
            p = word[i];
            c++;
        }
        return c;
    }
};