//Method 1
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

//Method 2
class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> record;
        for(string ch: ops){
            if (ch == "C") record.pop_back();
            else if (ch == "D") record.push_back(record.back() * 2);
            else if (ch == "+") record.push_back(record.back() + record[record.size() - 2]);
            else record.push_back(stoi(ch));
        }
        return accumulate(record.begin(), record.end(), 0);
    }
};