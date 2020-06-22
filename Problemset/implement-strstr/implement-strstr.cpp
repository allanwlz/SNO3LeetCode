
// @Title: 实现 strStr() (Implement strStr())
// @Author: user3919vu
// @Date: 2020-06-20 14:34:15
// @Runtime: 4 ms
// @Memory: 6.9 MB

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        if (haystack.empty()) return -1;
        unordered_map<char, int> table;
        for(int i = 0; i < needle.size(); i++) table[needle[i]] = needle.size() - i;
        int i = 0, j = 0, del = haystack.size() - needle.size();
        while(i <= del){
            if (haystack.substr(i, needle.size()) == needle) return i;
            if (i == del) return -1;
            char c = haystack[i + needle.size()];
            if (table.count(c) == 1) i += table[c];
            else i += (needle.size() + 1);
        }
        return -1;
    }
};
