class Solution {
public:
    string removeDuplicateLetters(string s) {
       string ans = "";
        vector<int> freq(26, 0);
        for(char x: s) freq[x-'a']++;
        vector<bool> visited(26, false);
        for(char x: s){
            if(visited[x-'a']){
                freq[x-'a']--;
                continue;
            }
            while(ans!="" && x<ans.back() && freq[ans.back()-'a']>0){
                visited[ans.back()-'a'] = false;
                ans.pop_back();
            }
            ans.push_back(x);
            visited[x-'a'] = true;
            freq[x-'a']--;
        }
        return ans;
    }
};