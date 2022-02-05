class Solution {
public:
    int minimumSum(int num) {
        string n = to_string(num);
        sort(n.begin(), n.end());
        string n1 = to_string(n[0]-'0')+to_string(n[2]-'0'), n2 = to_string(n[1]-'0')+to_string(n[3]-'0');
        return stoi(n1)+stoi(n2);
    }
};