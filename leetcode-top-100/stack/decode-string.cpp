// link: https://leetcode.cn/problems/decode-string

class Solution {
public:
    // Method: Auxiliary Stack
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    string decodeString(string s) {
        string ans = "", tmp;
        stack<char> st;
        int idx = 0, n = s.size(), cnt, x;

        while (idx < n) {
            if (isalnum(s[idx]) || s[idx] == '[') {
                st.push(s[idx++]);
            } else {
                tmp = "";
                while (st.top() != '[') {
                    tmp = st.top() + tmp;
                    st.pop();
                }
                st.pop();
                cnt = 0;
                x = 1;
                while (!st.empty() && isdigit(st.top())) {
                    cnt += x * (st.top() - '0');
                    x *= 10;
                    st.pop();
                }
                for (int i = 0; i < cnt; ++i) {
                    for (char c : tmp) {
                        st.push(c);
                    }
                }
                ++idx;
            }
        }

        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }

        return ans;
    }
};