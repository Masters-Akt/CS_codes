int n = heights.size();
        int max_area = 0;
        stack<pair<int,int>> s;
        for(int i=0; i<n; i++){
            int start = i;
            while(!s.empty() and s.top().second > heights[i]){
                int index = s.top().first;
                int height = s.top().second;
                s.pop();
                max_area = max(max_area, (i - index)*height);
                start = index;
            }
            s.push({start, heights[i]});
        }
        while(!s.empty()){
            max_area = max(max_area, s.top().second * (n-s.top().first));
            s.pop();
        }
        return max_area;