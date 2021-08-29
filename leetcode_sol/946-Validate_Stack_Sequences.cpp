class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> s;
        s.push(pushed[0]);
        int push = 1, pop = 0;
        while(1){
            if(push==pushed.size() && pop==popped.size()) return true;
            if(s.empty() && push==pushed.size()) return false;
            if(s.empty()){
                s.push(pushed[push]);
                push++;
                continue;
            }
            if(s.top()==popped[pop] && pop<popped.size()){
                s.pop();
                pop++;
                continue;
            }else if(push<pushed.size()){
                s.push(pushed[push]);
                push++;
                continue;
            }
            return false;
        }
        return false;
    }
};