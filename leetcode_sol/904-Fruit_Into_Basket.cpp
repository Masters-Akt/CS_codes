class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i, j;
        unordered_map<int, int> m;
        for(i=0, j=0; j<fruits.size(); j++){
            m[fruits[j]]++;
            if(m.size()>2){
                m[fruits[i]]--;
                if(m[fruits[i]]==0) m.erase(fruits[i]);
                i++;
            }
        }
        return j-i;
    }
};