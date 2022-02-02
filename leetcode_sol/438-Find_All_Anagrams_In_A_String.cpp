class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if(s.size()<p.size()) return ans;
        vector<int> mapp(26, 0);
        vector<int> maps(26, 0);
        for(int i=0;i<p.size();i++){
            mapp[p[i]-'a']++;
            maps[s[i]-'a']++;
        }
        if(mapp==maps) ans.push_back(0);
        for(int i=p.size();i<s.size();i++){
            maps[s[i-p.size()]-'a']--;
            maps[s[i]-'a']++;
            if(mapp==maps) ans.push_back(i-p.size()+1);
        }
        return ans;
    }
};