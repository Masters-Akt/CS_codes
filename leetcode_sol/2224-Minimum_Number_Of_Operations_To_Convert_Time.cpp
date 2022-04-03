class Solution {
public:
    int convertTime(string current, string correct) {
        int h1 = stoi(current.substr(0, 2)), m1 = stoi(current.substr(3, 2)), h2 = stoi(correct.substr(0, 2)), m2 = stoi(correct.substr(3, 2));
        int dif = (h2*60+m2)-(h1*60+m1);
        int ans = 0;
        ans+=(dif/60);
        dif=dif%60;
        ans+=(dif/15);
        dif=dif%15;
        ans+=(dif/5);
        dif = dif%5;
        ans+=dif;
        return ans;
    }
};