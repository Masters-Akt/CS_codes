class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int checkindex;
        if(ruleKey=="type") checkindex = 0;
        else if(ruleKey=="color") checkindex = 1;
        else checkindex = 2;
        int c = 0;
        for(int i=0;i<items.size();i++){
            if(items[i][checkindex]==ruleValue) c++;
        }
        return c;
    }
};