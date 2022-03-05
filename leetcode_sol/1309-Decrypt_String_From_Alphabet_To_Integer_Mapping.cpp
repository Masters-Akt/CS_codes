class Solution {
public:
    string freqAlphabets(string s) {
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(i+2<s.size() && s[i+2]=='#'){
                string temp = s.substr(i, 2);
                int n = stoi(temp)-1;
                ans+=('a'+n);
                i+=2;
            }else{
                string temp = s.substr(i, 1);
                int n = stoi(temp)-1;
                ans+=('a'+n);
            }
        }
        return ans;
    }
};