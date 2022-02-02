class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        char temp;
        while(columnNumber){
            columnNumber--;
            temp = 'A'+columnNumber%26;
            ans+=temp;
            columnNumber/=26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};