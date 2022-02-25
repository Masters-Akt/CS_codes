class Solution {
public:
    int compareVersion(string version1, string version2) {
        version1+=".@";
        version2+=".@";
        stringstream ss1(version1);
        stringstream ss2(version2);
        string s1, s2;
        getline(ss1, s1, '.');
        getline(ss2, s2, '.');
        while(s1!="@" || s2!="@"){
            int n1 = 0, n2 = 0;
            if(s1!="@") n1 = stoi(s1);
            if(s2!="@") n2 = stoi(s2);
            if(n1<n2) return -1;
            if(n1>n2) return 1;
            getline(ss1, s1, '.');
            getline(ss2, s2, '.');
        }
        return 0;
    }
};