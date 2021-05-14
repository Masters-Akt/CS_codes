class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        for(int i=0;i<boxes.size();i++){
            int c=0;
            for(int j=i+1;j<boxes.size();j++){
                if(boxes[j]=='1'){
                    c+=(j-i);
                }
            }
            for(int j=0;j<i;j++){
                if(boxes[j]=='1'){
                    c+=(i-j);
                }
            }
            ans.push_back(c);
        }
        return ans;
    }
};