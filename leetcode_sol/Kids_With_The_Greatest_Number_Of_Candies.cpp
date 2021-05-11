class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        for(int i=0;i<candies.size();i++){
            int c=candies[i]+extraCandies;
            bool ch = true;
            for(int j=0;j<candies.size();j++){
                if(i!=j){
                    if(c<candies[j]){
                        ch=false;
                        break;
                    }
                }
            }
            ans.push_back(ch);
        }
        return ans;
    }
};