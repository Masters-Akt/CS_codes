//M1 - Recursion - TLE
class Solution {
private:
    int solve(vector<int>& colors, int i, int j){
        if(i==j) return 0;
        if(colors[i]!=colors[j]) return j-i;
        return max(solve(colors, i+1, j), solve(colors, i, j-1));
    }
public:
    int maxDistance(vector<int>& colors) {
        return solve(colors, 0, colors.size()-1);
    }
};

//M2
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i=0, j=colors.size()-1;
        while(colors[i]==colors[colors.size()-1]) i++;
        while(colors[j]==colors[0]) j--;
        return max(j, (int)colors.size()-i-1);
    }
};