// link: https://leetcode.cn/problems/valid-parentheses

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (!st.empty()) {
                if (st.top() == ')' || st.top() == ']' || st.top() == '}')
                    return false;
                if (st.top() == '(' && c == ')' || 
                    st.top() == '[' && c == ']' ||
                    st.top() == '{' && c == '}'
                ) {
                    st.pop();
                } else {
                    st.push(c);
                }
            }
            else
                st.push(c);
        }

        return st.empty();
    }
};