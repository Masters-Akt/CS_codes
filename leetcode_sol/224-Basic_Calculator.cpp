class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int ans = 0, num = 0, sign = 1;
        for(int i=0;i<s.size();i++){
            char x = s[i];
            if(isdigit(x)) num = num*10+(int)(x-'0');
            else if(x=='+'){
                ans+=(sign*num);
                num = 0, sign = 1;
            }else if(x=='-'){
                ans+=(sign*num);
                num=0, sign=-1;
            }else if(x=='('){
                st.push(ans);
                st.push(sign);
                ans = 0, sign = 1;
            }else if(x==')'){
                ans+=(sign*num);
                num = 0;
                ans*=st.top();
                st.pop();
                ans+=st.top();
                st.pop();
            }
        }
        if(num!=0) ans+=(sign*num);
        return ans;
    }
};