class Solution {
public:
    bool isValid(string s) {
    stack<char> ss;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[')
            ss.push(ch);
        else {
            if (ss.empty())
                return false;
            if (ss.top() == '(' && ch == ')')
                ss.pop();
            else if (ss.top() == '[' && ch == ']')
                ss.pop();
            else if (ss.top() == '{' && ch == '}')
                ss.pop();
            else
                return false;
            }
        }
    return ss.empty();
    }
};