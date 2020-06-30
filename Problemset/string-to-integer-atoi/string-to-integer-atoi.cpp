
// @Title: 字符串转换整数 (atoi) (String to Integer (atoi))
// @Author: user3919vu
// @Date: 2020-06-27 08:54:58
// @Runtime: 20 ms
// @Memory: 9.2 MB

class DFA{
private:
    unordered_map<string, vector<string>> dfa = {
        {"start", {"start", "sign", "digit", "end"}},
        {"sign", {"end", "end", "digit", "end"}},
        {"digit", {"end", "end", "digit", "end"}}
    };
    int get_index(char c){
        if (c == ' ') return 0;
        if (c == '+' || c == '-') return 1;
        if (isdigit(c)) return 2;
        return 3;
    }
public:
    long long ans = 0, limit = INT_MAX;
    bool ispos = true;
    string state = "start";
    void get(char c){
        state = dfa[state][get_index(c)];
        if (state == "sign" && c == '-'){
            limit ++;
            ispos = false;
        } else if (state == "digit"){
            ans = ans * 10 + c - '0';
            if (ans >= limit) {
                ans = limit;
                state = "end";
            }
        }
    }
};
class Solution {
public: 
    int myAtoi(string str) {
        DFA ATOI;
        for (auto c : str){
            ATOI.get(c);
            if (ATOI.state == "end") break;
        }
        return (int) (ATOI.ispos ? ATOI.ans : -ATOI.ans);
    }
};
