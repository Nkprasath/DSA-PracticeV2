class Solution {
public:
    string reverseWords(string s) {
        string res, word;
        stringstream str(s);
        while(str>>word) res = word+" "+res;
        res.pop_back();
        return res;
    }
};