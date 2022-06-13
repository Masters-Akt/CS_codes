class Solution {
public:
    int minimumDeletions(string s) {
        int a = 0;
        for(char x: s) if(x=='a') a++;
        int b = 0;
        int ans = a;
        for(char x: s){
            if(x=='a') a--;
            if(x=='b') b++;
            ans = min(ans, a+b);
        }
        return ans;
    }
};