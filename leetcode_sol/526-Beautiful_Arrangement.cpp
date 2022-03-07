class Solution {
private:
    void solve(int n, int& ans, int position, unordered_map<int, bool>& seen){
        if(position>n){
            ans++;
            return;
        }
        for(int i=1;i<=n;i++){
            if(!seen[i] && (i%position==0 || position%i==0)){
                seen[i] = true;
                solve(n, ans, position+1, seen);
                seen[i] = false;
            }
        }
    }
public:
    int countArrangement(int n) {
        int ans = 0;
        unordered_map<int, bool> seen;
        solve(n, ans, 1, seen);
        return ans;
    }
};