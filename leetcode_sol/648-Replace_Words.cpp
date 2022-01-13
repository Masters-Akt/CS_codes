class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        sentence+=" ";
        map<string, int> m;
        for(int i=0;i<dictionary.size();i++){
            m[dictionary[i]] = 1;
        }
        string ans = "", temp = "";
        for(int i=0;i<sentence.size();i++){
            if(sentence[i]==' '){
                ans+=temp+" ";
                temp = "";
            }else{
                temp+=sentence[i];
                if(m[temp]==1){
                    ans+=temp+" ";
                    while(sentence[i]!=' ' && i<sentence.size()) i++;
                    temp = "";
                }
            }
        }
        ans.pop_back();
        return ans;
    }
};