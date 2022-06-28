class Solution {
public:
    int minDeletions(string s) {
        unordered_map<int, bool> curr_freq;
        sort(s.begin(), s.end());
        int count = 1, ans = 0;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]) count++;
            else{
                while(count!=0 && curr_freq[count]){
                    ans++;
                    count--;
                }
                if(count) curr_freq[count] = true;
                count = 1;
            }
        }
        while(count!=0 && curr_freq[count]){
            ans++;
            count--;
        }
        return ans;
    }
};