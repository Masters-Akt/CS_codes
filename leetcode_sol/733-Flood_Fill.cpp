class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int initialColor = image[sr][sc];
        if(initialColor==newColor) return image;
        image[sr][sc] = newColor;
        queue<pair<int, int>> q;
        q.push({sr, sc});
        vector<int> dir={0, 1, 0, -1, 0};
        while(!q.empty()){
            auto x = q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int xi = x.first+dir[i];
                int yi = x.second+dir[i+1];
                if(xi>=0 && yi>=0 && xi<image.size() && yi<image[0].size() && image[xi][yi]==initialColor){
                    image[xi][yi] = newColor;
                    q.push({xi, yi});
                }
            }
        }
        return image;
    }
};