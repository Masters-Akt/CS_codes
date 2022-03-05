class Solution {
private:
    int solve(string s){
        int ans = 0;
        for(int i=0;i<s.size()/2;i++){
            int r = s.size()-i-1, l = i;
            while(l<r){
                if(s[l]==s[r]) break;
                r--;
            }
            if(l==r){
                char x = s[l];
                s[l] = s[l+1];
                s[l+1] = x;
                ans++;
                i--;
            }else{
                for(int j=r;j<s.size()-l-1;j++){
                    char x = s[j];
                    s[j] = s[j+1];
                    s[j+1] = x;
                    ans++;
                }
            }
        }
        return ans;
    }
public:
    int minMovesToMakePalindrome(string s) {
        vector<int> check(26, 0);
        int o = 0;
        for(int i=0;i<s.size();i++){
            check[s[i]-'a']++;
        }
        for(int x: check){
            if(x%2!=0) o++;
        }
        if(o>1) return -1;
        int a = solve(s);
        reverse(s.begin(), s.end());
        return max(a, solve(s));
    }
};