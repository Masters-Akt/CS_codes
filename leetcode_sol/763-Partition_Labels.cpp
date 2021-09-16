class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int> ans;
        vector<vector<int>> hash(26, vector<int>(2, -1));
        for(int i=0;i<s.size();i++){
            if(hash[s[i]-'a'][0]==-1){
                hash[s[i]-'a'][0] = i;
            }else{
                hash[s[i]-'a'][1] = i;
            }
        }
        for(int i=0;i<s.size();i++){
            int start = hash[s[i]-'a'][0];
            int end = hash[s[i]-'a'][1];
            if(end==s.size()-1){
                ans.push_back(end-start+1);
                break;
            }
            if(end==-1){
                ans.push_back(1);
            }else{
                for(int j=i+1;j<end;j++){
                    if(hash[s[j]-'a'][1]!=-1 && hash[s[j]-'a'][1]>end) end = hash[s[j]-'a'][1];
                }
                ans.push_back(end-start+1);
                i=end;
            }
        }
        return ans;
    }
};