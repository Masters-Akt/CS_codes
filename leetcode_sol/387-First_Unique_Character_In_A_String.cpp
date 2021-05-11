class Solution {
public:
    int firstUniqChar(string s) {
        int a[26]={0};
        for(int i=0;i<s.size();i++){
            a[(int)s[i]-97]++;
        }
        for(int i=0;i<s.size();i++){
            if(a[(int)s[i]-97]==1){
                return i;
            }
        }
        return -1;
    }
};