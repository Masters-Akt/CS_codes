class Solution {
public:
    int compress(vector<char>& chars) {
        string ans = "";
        int count = 1;
        for(int i=1;i<chars.size();i++){
            if(chars[i]==chars[i-1]) count++;
            else{
                if(count==1) ans+=chars[i-1];
                else ans+=chars[i-1]+to_string(count);
                count = 1;
            }
        }
        if(count==1) ans+=chars[chars.size()-1];
        else ans+=chars[chars.size()-1]+to_string(count);
        for(int i=0;i<ans.size();i++) chars[i] = ans[i];
        return ans.size();
    }
};