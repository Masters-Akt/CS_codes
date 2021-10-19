class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> nums;
        string temp = "";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(isdigit(temp[0])){
                    nums.push_back(stoi(temp));
                }
                temp = "";
            }else temp+=s[i];
        }
        if(isdigit(temp[0])){
            nums.push_back(stoi(temp));
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]) return false;
        }
        return true;
    }
};