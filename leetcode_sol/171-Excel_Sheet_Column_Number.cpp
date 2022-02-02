class Solution {
public:
    int titleToNumber(string columnTitle) {
        int i=0, ans = 0;
        while(i<columnTitle.size()){
            ans*=26;
            ans+=(columnTitle[i]-'A')%26+1;
            i++;
        }
        return ans;
    }
};