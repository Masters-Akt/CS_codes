class Solution {
public:
    string removeKdigits(string num, int k) {
        if(k>=num.size()) return "0"; 
        stack<int> s;
        for(int i=0;i<num.size();i++){
            int x = num[i]-'0';
            while(!s.empty() && k>0 && x<s.top()){
                s.pop();
                k--;
            }
            s.push(x);
        }
        while(!s.empty() && k>0){
            s.pop();
            k--;
        }
        string ans="";
        while(!s.empty()){
            ans = to_string(s.top())+ans;
            s.pop();
        }
        while(ans[0]=='0'){
            ans = ans.substr(1, ans.size()-1);
        }
        if(ans=="") ans = "0";
        return ans;
    }
};