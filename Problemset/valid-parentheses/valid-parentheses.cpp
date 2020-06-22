
// @Title: 有效的括号 (Valid Parentheses)
// @Author: user3919vu
// @Date: 2020-05-28 21:45:52
// @Runtime: 4 ms
// @Memory: 6.3 MB

class Solution {
public:
    bool isPair(char a, char b){
        return (a == '(' && b == ')') || (a == '[' && b == ']') || (a == '{' && b == '}');
    }
    bool isValid(string s) {
        stack<int> stk;
        for(int i = 0; i < s.length(); i++)
        {
            if (stk.empty() || !(isPair(stk.top(), s[i]))) stk.push(s[i]);
            else stk.pop();
        }
        return stk.empty();
    }
};
