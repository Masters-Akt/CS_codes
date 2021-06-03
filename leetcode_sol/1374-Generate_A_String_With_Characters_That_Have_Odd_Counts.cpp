class Solution {
public:
    string generateTheString(int n) {
        string ans="";
        if(n%2==0){
            n--;
            ans+="b";
        }
        while(n--){
            ans+="a";
        }
        return ans;
    }
};