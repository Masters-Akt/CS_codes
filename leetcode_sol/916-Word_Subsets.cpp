class Solution {
private:
    vector<int> counter(string& word) {
        vector<int> count(26);
        for (char c : word) count[c - 'a']++;
        return count;
    }
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> count(26), tmp(26);
        int i;
        for (string b : words2) {
            tmp = counter(b);
            for (i = 0; i < 26; ++i)
                count[i] = max(count[i], tmp[i]);
        }
        vector<string> res;
        for (string a : words1) {
            tmp = counter(a);
            for (i = 0; i < 26; ++i)
                if (tmp[i] < count[i])
                    break;
            if (i == 26) res.push_back(a);
        }
        return res;
    }
};