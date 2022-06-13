class Solution {
private:
    static bool check(char x){
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u') return true;
        return false;
    }
public:
    int maxVowels(string s, int k) {
        int ans = 0;
        for(int i=0;i<k;i++){
            if(check(s[i])) ans++;
        }
        int c = ans;
        for(int i=1;i+k-1<s.size();i++){
            if(!check(s[i-1]) && check(s[i+k-1])) c++;
            else if(check(s[i-1]) && !check(s[i+k-1])) c--;
            ans = max(ans, c);
        }
        return ans;
    }
};