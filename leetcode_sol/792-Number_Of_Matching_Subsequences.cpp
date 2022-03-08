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

//store the indices of s and check for it - AC
class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<vector<int>> store(26);
        for(int i=0;i<s.size();i++) store[s[i]-'a'].push_back(i);
        int ans = 0;
        for(string& word: words){
            int pos = -1;
            bool found = true;
            for(char& c: word){
                auto it = upper_bound(store[c-'a'].begin(), store[c-'a'].end(), pos);
                if(it!=store[c-'a'].end()) pos = *it;
                else found = false;
            }
            if(found) ans++;
        }
        return ans;
    }
};