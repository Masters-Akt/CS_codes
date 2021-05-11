class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> ans;
        while(A.size()!=0){
            vector<int>::iterator it1;
            for(it1=A.begin(); it1!=A.end();it1++){
                if(*it1%2==0){
                    ans.push_back(*it1);
                    A.erase(it1);
                    break;
                }
            }
            vector<int>::iterator it2;
            for(it2=A.begin(); it2!=A.end();it2++){
                if(*it2%2==1){
                    ans.push_back(*it2);
                    A.erase(it2);
                    break;
                }
            }
            
            
        }
        return ans;
    }
};