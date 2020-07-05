
// @Title: 基本计算器 II (Basic Calculator II)
// @Author: user3919vu
// @Date: 2020-07-02 10:43:04
// @Runtime: 8 ms
// @Memory: 7.8 MB

class Solution {
public:
    long long pre = 0, cur = 0, next = 0;
    char sign = '+';
    void process(){
        switch (sign){
            case '+' : pre += cur; cur = next; break;
            case '-' : pre += cur; cur = -next; break;
            case '*' : cur *= next; break;
            case '/' : cur /= next; break; 
        }
    }
    int calculate(string s) {   
        for(auto c : s){
            if (c == ' ') continue;
            if (isdigit(c)) next = next * 10 + c - '0'; 
            else {
                process();
                next = 0;
                sign = c;
            }
        }
        process();
        return pre + cur;
    }
};
