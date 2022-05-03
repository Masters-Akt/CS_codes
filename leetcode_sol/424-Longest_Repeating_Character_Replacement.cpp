class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int ans = 0;
        vector<int> store(26, 0);
        int start = 0, end = 0, maxfreq = 0;
        while(end<n){
            store[s[end]-'A']++;
            maxfreq = max(maxfreq, store[s[end]-'A']);
            if(end-start+1-maxfreq>k){
                ans = max(ans, end-start);
                store[s[start]-'A']--;
                start++;
                maxfreq = *max_element(store.begin(), store.end());
            }
            end++;
        }
        ans = max(ans, end-start);
        return ans;
    }
};