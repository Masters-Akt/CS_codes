class Solution {
private:
    string solve(string& x){
        string ans = "";
        int count = 0;
        for(int i=x.size()-1;i>=0;i--){
            if(x[i]=='#') count++;
            else{
                if(count>0) count--;
                else ans+=x[i];
            }
        }
        return ans;
    }
public:
    bool backspaceCompare(string s, string t) {
        return solve(s)==solve(t);
    }
};