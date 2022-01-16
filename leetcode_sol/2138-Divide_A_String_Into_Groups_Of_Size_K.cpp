class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int i=0, j=k-1;
        while(i+k<=s.size()){
            ans.push_back(s.substr(i, k));
            i+=k;
        }
        int need = 0;
        if(i<s.size()){
            string temp = s.substr(i);
            int l = temp.size();
            need = k-l;
            while(need--) temp+=fill;
            ans.push_back(temp);
        }
        return ans;
    }
};