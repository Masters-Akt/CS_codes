class Solution {
public:
    string customSortString(string order, string str) {
        int a[128] = {};
        for(char c:str) a[c]++;
        int i=0;
        for(char c:order){
            while(a[c]>0){
                str[i++]=c;
                a[c]--;
            }
        }
        for(char c='a'; c<='z'; c++) {
            while(a[c]>0){
                str[i++]=c;
                a[c]--;
            }
        }
        return str;
    }
};