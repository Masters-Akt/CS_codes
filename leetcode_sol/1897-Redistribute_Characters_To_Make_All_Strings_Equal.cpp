class Solution {
public:
    bool makeEqual(vector<string>& words) {
        if(words.size()==1) return true;
        int a[26]={0};
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].size();j++){
                a[words[i][j]-'a']++;
            }
        }
        sort(a, a+26, greater<int>());
        int s = words.size();
        for(int i=0;i<26;i++){
            if(a[i]==0) break;
            if(a[i]%s!=0) return false;
        }
        return true;
    }
};