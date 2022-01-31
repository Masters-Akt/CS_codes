class Solution {
private:
    unordered_map<int, string> m;
    int i = 0;
public:
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        m[i] = longUrl;
        string ans = "www.tinyurl.com/"+to_string(i);
        i++;
        return ans;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string d = "";
        int j = shortUrl.size()-1;
        while(shortUrl[j]!='/'){
            d = shortUrl[j]+d;
            j--;
        }
        int n = stoi(d);
        return m[n];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));