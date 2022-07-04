class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(begin(horizontalCuts), end(horizontalCuts));
        sort(begin(verticalCuts), end(verticalCuts));
        auto max_h = max(horizontalCuts[0], h - horizontalCuts.back());
        auto max_v = max(verticalCuts[0], w - verticalCuts.back());
        for (auto i = 0; i < horizontalCuts.size() - 1; ++i)
            max_h = max(max_h, horizontalCuts[i + 1] - horizontalCuts[i]);
        for (auto i = 0; i < verticalCuts.size() - 1; ++i)
            max_v = max(max_v, verticalCuts[i + 1] - verticalCuts[i]);        
        return (long)max_h * max_v % 1000000007;
    }
};