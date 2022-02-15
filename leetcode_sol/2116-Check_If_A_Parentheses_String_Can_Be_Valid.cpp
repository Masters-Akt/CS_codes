class Solution {
public:
    bool canBeValid(string s, string locked) {
        if(s.size()%2) return false;
        stack<int> lock, unlock;
        for(int i=0;i<s.size();i++){
            if(s[i]==')' && locked[i]=='1'){
                if(!lock.empty()) lock.pop();
                else if(!unlock.empty()) unlock.pop();
                else return false;
            }else if(s[i]=='(' && locked[i]=='1') lock.push(i);
            else unlock.push(i);
        }
        while(!lock.empty()){
            if(unlock.empty() || unlock.top()<lock.top()) return false;
            unlock.pop();
            lock.pop();
        }
        return true;
    }
};