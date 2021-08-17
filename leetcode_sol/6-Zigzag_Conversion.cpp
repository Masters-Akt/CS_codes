class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector<vector<char>> store(numRows);
        int i=0, j=0;
        bool check = true;
        while(i<s.size()){
            store[j].push_back(s[i]);
            i++;
            if(check){
                j++;
                if(j==numRows){
                    check = false;
                    j-=2;
                }
            }else{
                j--;
                if(j==-1){
                    check = true;
                    j+=2;
                }
            }
        }
        string ans = "";
        for(int i=0;i<numRows;i++){
            for(int j=0;j<store[i].size();j++){
                ans+=store[i][j];
            }
        }
        return ans;
    }
};