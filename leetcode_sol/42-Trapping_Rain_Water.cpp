//Method 1 - TC = O(N) SC = O(N)
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

//Method 2 - Two Pointers - TC = O(N) SC = O(1)
class Solution {
public:
    int trap(vector<int>& height) {
        int l=0, r=height.size()-1, left_max = 0, right_max = 0, ans = 0;
        while(l<=r){
            if(height[l]<=height[r]){
                if(height[l]>left_max) left_max = height[l];
                else ans+=(left_max-height[l]);
                l++;
            }else{
                if(height[r]>right_max) right_max = height[r];
                else ans+=right_max-height[r];
                r--;
            }
        }
        return ans;
    }
};