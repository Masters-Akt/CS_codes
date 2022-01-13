class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> st;
        for(int i=0;i<tokens.size();i++){
            if(st.empty()) st.push(tokens[i]);
            else if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                int ans = 0;
                if(tokens[i]=="+") ans = stoi(b)+stoi(a);
                else if(tokens[i]=="-") ans = stoi(b)-stoi(a);
                else if(tokens[i]=="*") ans = stoi(b)*stoi(a);
                else ans = stoi(b)/stoi(a);
                st.push(to_string(ans));
            }else st.push(tokens[i]);
        }
        return stoi(st.top());
    }
};