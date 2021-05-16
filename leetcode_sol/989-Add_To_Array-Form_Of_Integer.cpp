class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int j=num.size()-1;
        while(k>0 && j>=0){
            num[j]+=(k%10);
            k/=10;
            j--;
        }
        while(k>0){
            num.insert(num.begin(), k%10);
            k/=10;
        }
        for(int i=num.size()-1;i>=0;i--){
            if(i==0){
                if(num[i]>=10){
                    num[i]=num[i]%10;
                    num.insert(num.begin(), 1);
                }
            }else{
                if(num[i]>=10){
                    num[i]=num[i]%10;
                    num[i-1]++;
                }
            }
        }
        return num;
    }
};