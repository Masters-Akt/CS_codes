class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1 = word1.size(), l2 = word2.size();
        string ans = "";
        if(l1<=l2){
            for(int i=0;i<l1;i++){
                ans=ans+word1[i]+word2[i];
            }
            for(int i=l1;i<l2;i++){
                ans+=word2[i];
            }
        }else{
            for(int i=0;i<l2;i++){
                ans=ans+word1[i]+word2[i];
            }
            for(int i=l2;i<l1;i++){
                ans+=word1[i];
            }
        }
        return ans;
    }
};