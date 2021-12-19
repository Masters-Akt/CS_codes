class Solution {
public:
    string toGoatLatin(string sentence) {
        string ans = "";
        vector<string> s;
        string temp = "";
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]==' '){
                s.push_back(temp);
                temp = "";
            }else temp+=sentence[i];
        }
        s.push_back(temp);
        for(int i=0;i<s.size();i++){
            char x = s[i][0];
            if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'|| x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
                s[i]+="ma";
            }else{
                s[i] = s[i].substr(1, s[i].size()-1) + x + "ma";
            }
            for(int j=0;j<=i;j++){
                s[i]+="a";
            }
            ans+=s[i];
            if(i!=s.size()-1) ans+=" ";
        }
        return ans;
    }
};