class Solution {
public:
    int trap(vector<int>& height) {
        int p[height.size()], s[height.size()];
        int temp=0;
        for(int i=0;i<height.size();i++){
            if(height[i]>temp) temp = height[i];
            p[i] = temp;
        }
        temp = 0;
        for(int i=height.size()-1;i>=0;i--){
            if(height[i]>temp) temp = height[i];
            s[i] = temp;
        }
        int ans = 0;
        for(int i=0;i<height.size();i++){
            int a = min(p[i], s[i])-height[i];
            if(a>0) ans+=a;
        }
        return ans;
    }
};