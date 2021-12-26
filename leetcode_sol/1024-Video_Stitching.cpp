class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int time) {
        sort(clips.begin(), clips.end());
        int clip_index = 0, max_time = 0, ans = 0;
        while(max_time<time){
            int curr_time = 0;
            while(clip_index<clips.size() && clips[clip_index][0]<=max_time) curr_time = max(curr_time, clips[clip_index++][1]);
            if(curr_time<=max_time) return -1;
            max_time = curr_time;
            ans++;
        }
        return ans;
    }
};