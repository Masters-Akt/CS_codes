//Brute Force - TLE
class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        int ans = 0;
        for(int i=0;i<words.size();i++){
            int x = 0, y = 0;
            while(y<s.size()){
                if(words[i][x]==s[y]) x++;
                y++;
                if(x==words[i].size()){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};