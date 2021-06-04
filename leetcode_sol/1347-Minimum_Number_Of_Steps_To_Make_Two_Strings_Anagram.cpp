class Solution {
public:
    int minSteps(string s, string t) {
        int a[26]={0};
        for(int i=0;i<s.size();i++){
            a[(int)s[i]-97]++;
        }
        for(int i=0;i<t.size();i++){
            a[(int)t[i]-97]--;
        }
        int sum = 0;
        for(int i=0;i<26;i++){
            sum+=abs(a[i]);
        }
        return sum/2;
    }
};