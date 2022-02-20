class Solution {
private:
    int findmax(string& answerKey, int k, char check){
        int start=0, ans = 0, temp = 0;
        for(int i=0;i<answerKey.size();i++){
            if(answerKey[i]==check) temp++;
            while(temp>k){
                if(answerKey[start]==check) temp--;
                start++;
            }
            ans = max(ans, i+1-start);
        }
        return ans;
    }
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(findmax(answerKey, k, 'T'), findmax(answerKey, k, 'F'));
    }
};