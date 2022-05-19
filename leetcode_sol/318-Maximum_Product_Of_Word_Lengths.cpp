class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<vector<int>> store(words.size(), vector<int>(26, 0));
        int ans = 0;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                store[i][words[i][j]-'a']++;
            }
            for(int j=0;j<i;j++){
                bool check = true;
                for(int k=0;k<26;k++){
                    if(store[i][k] && store[j][k]){
                        check = false;
                        break;
                    }
                }
                if(check) ans = max(ans, (int)words[i].size()*(int)words[j].size());
            }
        }
        return ans;
    }
};