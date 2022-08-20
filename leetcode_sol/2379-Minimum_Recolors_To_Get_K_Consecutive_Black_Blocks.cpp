int ans = INT_MAX;
        for(int i=0;i<=blocks.size()-k;i++){
            int c = 0;
            for(char x: blocks.substr(i, k)){
                if(x=='W') c++;
            }
            ans = min(ans, c);
        }
        return ans;