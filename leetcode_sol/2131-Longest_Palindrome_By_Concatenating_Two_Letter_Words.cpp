class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string, int> m;
        int ans = 0, same = 0;
        for(int i=0;i<words.size();i++){
            if(words[i][0]==words[i][1]) same++;
            if(m[words[i]]>0){
                m[words[i]]--;
                ans+=4;
                if(words[i][0]==words[i][1]) same-=2;
            }
            else{
                string temp = "";
                temp+=words[i][1];
                temp+=words[i][0];
                m[temp]++;   
            }
        }
        if(same>0) ans+=2;
        return ans;
    }
};