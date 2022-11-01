class Solution {
private:
    vector<pair<int, int>> dir{{1, 0}, {0, -1}, {0, 1}};
    int drop(int pos, vector<vector<int>> &ug, int m, int n) {
        queue<pair<int, int>> q;
        q.push({0, pos});
        while (!q.empty()) {
            auto [i, j] = q.front();
            q.pop();
            if (i == m - 1) return j / 3;
            ug[i][j] = 1;
            for (auto [di, dj] : dir)
                if (j + dj >= 0 && j + dj < n && !ug[i + di][j + dj]) {
                    q.push({i + di, j + dj});
                    break;
                }
            }
        return -1;
    }
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> ug(m * 3, vector<int>(n * 3));
        for (auto i = 0; i < m; ++i)
            for (auto j = 0; j < n; ++j) {
                ug[i * 3 + 1][j * 3 + 1] = 1;
                ug[i * 3][j * 3] = ug[i * 3 + 2][j * 3 + 2] = grid[i][j] == 1;
                ug[i * 3][j * 3 + 2] = ug[i * 3 + 2][j * 3] = grid[i][j] != 1;
            }
        vector<int> res;
        for (auto i = 0; i < n; ++i) {
            res.push_back(drop(i * 3 + 1, ug, m * 3, n * 3));
        }
        return res;
    }
};