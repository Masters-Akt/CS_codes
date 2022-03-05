class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> ans;
        for(int h=0;h<12;++h)
            for(int m=0;m<60;++m)
                if(bitset<10>((h<<6)+m).count()==turnedOn){
                    string str=to_string(h)+":";
                    str+=(m<10)?("0"+to_string(m)):to_string(m);
                    ans.push_back(str);
                }
        return ans;
    }
};