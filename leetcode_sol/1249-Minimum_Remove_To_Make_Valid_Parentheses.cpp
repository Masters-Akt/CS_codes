class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int closing_bracket = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]==')') closing_bracket++;
        }
        string ans = "";
        int open = 0;
        for(char x: s){
            if(x=='('){
                if(open==closing_bracket) continue;
                open++;
            }else if(x==')'){
                closing_bracket--;
                if(open==0) continue;
                open--;
            }
            ans+=x;
        }
        return ans;
    }
};