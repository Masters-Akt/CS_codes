class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            int temp = i;
            bool check = true;
            while(temp>0){
                int r = temp%10;
                if(r==0 || i%r!=0){
                    check = false;
                    break;
                }
                temp/=10;
            }
            if(check) ans.push_back(i);
        }
        return ans;
    }
};