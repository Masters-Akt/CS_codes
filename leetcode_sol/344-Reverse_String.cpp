class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>::iterator it=s.begin();
        vector<char>::iterator it2=s.end()-1;
        while(it<it2){
            char temp = *it;
            *it = *it2;
            *it2 = temp;
            it++;
            it2--;
        }
    }
};