//M1 - Recursive - TC = O(N3) - SC = O(1)
class Solution {
private:
    int solve(string& s, int i, int j){
        if(i>=j) return 1;
        return s[i]==s[j] ? solve(s,i+1,j-1) : 0;
    }
public:
    int countSubstrings(string s) {
        int ans = 0;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                ans+=solve(s,i,j);
            }
        }
        return ans;
    }
};

//M2 - Memoization - TC = O(N2) - SC = O(N2)
class Solution {
private:
    int solve(vector<vector<int>>& store, string& s, int i, int j) {
        if(i>=j) return 1;
        if(store[i][j]>=0) return store[i][j];
        return store[i][j] = (s[i]==s[j]) ? solve(store,s,i+1,j-1) : 0;
    }
public:
    int countSubstrings(string s) {
        vector<vector<int>> store(s.size(), vector<int>(s.size(), -1));
        int ans = 0;
        for(int i=0; i<s.size(); i++){
            for(int j=i; j<s.size(); j++){
                ans+=solve(store,s,i,j);
            }
        }
        return ans;
    }
};

//M3 - Tabulation - TC = O(N2) - SC = O(N2)
class Solution {
public:
    int countSubstrings(string s) {
        vector<vector<int>> store(s.size(), vector<int>(s.size()));
        int ans = 0;
        for(int i=s.size()-1; i>=0; i--){
            for(int j=i; j<s.size(); j++){
                if(i==j) store[i][j] = 1;
                else if(i+1==j) store[i][j] = (s[i]==s[j]) ? 1 : 0;
                else store[i][j] = (s[i]==s[j]) ? store[i+1][j-1] : 0;
                ans+=store[i][j];
            }
        }
        return ans;
    }
};