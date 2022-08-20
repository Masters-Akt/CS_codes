class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int ans = 0;
        while(s.find("01")!=string::npos){
            int i = 0;
            string t = s;
            while(i<s.size()-1){
                if(s[i]=='0' && s[i+1]=='1'){
                    t[i] = '1';
                    t[i+1] = '0';
                }
                i++;
            }
            ans++;
            s = t;
        }
        return ans;
    }
};