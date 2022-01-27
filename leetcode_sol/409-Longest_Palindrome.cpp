//M1
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

//M2 - better
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> m;
        for(char x: s) m[x]++;
        int odd = 0, ans = 0;
        for(auto x: m){
            if(x.second%2==0) ans+=x.second;
            else{
                if(odd==0){
                    odd++;
                    ans+=x.second;
                }else{
                    ans+=x.second-1;   
                }
            }
        }
        return ans;
    }
};