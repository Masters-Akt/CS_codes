class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char, int> freq_s, freq_target;
        for(char &x: target) freq_target[x]++;
        int total_count = 0;
        for(char &x: s){
            freq_s[x]++;
            bool all_found = true;
            for(auto &y: freq_target){
                if(y.second>freq_s[y.first]){
                    all_found = false;
                    break;
                }
            }
            if(all_found){
                total_count++;
                for(char &y: target) freq_s[y]--;
            }
        }
        return total_count;
    }
};