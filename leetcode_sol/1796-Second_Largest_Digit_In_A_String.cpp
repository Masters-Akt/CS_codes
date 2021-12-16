class Solution {
public:
    int secondHighest(string s) {
        vector<bool> v(10, false);
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                v[s[i]-'0'] = true;
            }
        }
        bool ch = true;
        for(int i=9;i>=0;i--){
            if(v[i] && ch) ch = false;
            else if(v[i] && !ch) return i;
        }
        return -1;
    }
};