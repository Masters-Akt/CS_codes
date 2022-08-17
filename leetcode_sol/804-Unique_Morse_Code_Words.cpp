class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse_code = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> gen_codes;
        for(auto word : words) {
            string code = "";
            for(auto ch : word) code += morse_code[ch - 'a'];
            gen_codes.insert(code);
        }
        return gen_codes.size();
    }
};