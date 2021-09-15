class Solution {
public:
    int longestPalindrome(string s) {
        int cap[26] = {0};
        int sma[26] = {0};
        for(int i=0;i<s.size();i++){
            if((int)s[i]>=97 && (int)s[i]<=122){
                sma[s[i]-'a']++;
            }else if((int)s[i]>=65 && (int)s[i]<=90){
                cap[s[i]-'A']++;
            }
        }
        int sumeven = 0;
        int sumodd = 0;
        bool check = false;
        for(int i=0;i<26;i++){
            if(cap[i]!=0){
                if(cap[i]%2==0) sumeven+=cap[i];
                else{
                    sumodd+=(cap[i]-1);
                    check = true;
                }
            }
            if(sma[i]!=0){
                if(sma[i]%2==0) sumeven+=sma[i];
                else{
                    sumodd+=(sma[i]-1);
                    check = true;
                }
            }
        }
        if(!check) return sumeven;
        return sumeven+sumodd+1;
    }
};