//Method - O(N3)
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        vector<string> check = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans = {""};
        for(int i=0;i<digits.size();i++){
            vector<string> temp;
            for(int j=0;j<check[digits[i]-'0'].size();j++){
                for(int k=0;k<ans.size();k++){
                    temp.push_back(ans[k]+check[digits[i]-'0'][j]);
                }
            }
            ans = temp;
        }
        return ans;
    }
};