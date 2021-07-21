class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> s;
        for(string c: ops){
            if(c=="+"){
                int x = s.top();
                s.pop();
                int sum = x+s.top();
                s.push(x);
                s.push(sum);
            }else if(c=="D"){
                s.push(2*s.top());
            }else if(c=="C"){
                s.pop();
            }else{
                s.push(stoi(c));
            }
        }
        int sum = 0;
        while(!s.empty()){
            sum+=s.top();
            s.pop();
        }
        return sum;
    }
};