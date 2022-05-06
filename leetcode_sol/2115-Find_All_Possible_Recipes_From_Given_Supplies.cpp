class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        unordered_map<string, bool> m;
        for(string& x: supplies) m[x] = true;
        vector<string> ans;
        vector<int> index;
        for(int i=0;i<ingredients.size();i++) index.push_back(i);
        vector<int> index2;
        bool start = true;
        while(start){
            start = false;
            for(int i=0;i<index.size();i++){
                bool ch = true;
                for(string& x: ingredients[index[i]]){
                    if(!m[x]){
                        ch = false;
                        break;
                    }
                }
                if(ch){
                    ans.push_back(recipes[index[i]]);
                    m[recipes[index[i]]] = true;
                    start = true;
                }else index2.push_back(index[i]);
            } 
            index = index2;
            index2.clear();
        }
        return ans;
    }
};