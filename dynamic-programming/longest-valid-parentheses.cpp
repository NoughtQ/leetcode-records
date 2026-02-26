// link: https://leetcode.cn/problems/longest-valid-parentheses

class Solution {
public:
    // Method 1: Stack
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    int longestValidParentheses(string s) {
        int n = s.size();
        stack<pair<char, int>> st;
        vector<bool> is_valid(n, false);
        int len = 0, ans = 0;
        bool flag = false;

        for (int i = 0; i < n; ++i) {
            char c = s[i];
            if (c == '(') {
                st.push({c, i});
            } else {
                if (st.empty() || st.top().first != '(') {
                    st.push({c, i});
                } else {
                    int idx = st.top().second;
                    st.pop();
                    is_valid[idx] = true;
                    is_valid[i] = true;
                }
            }
        }

        for (int i = 0; i < n; ++i) {
            if (is_valid[i]) {
                ++len;
            } else {
                ans = max(ans, len);
                len = 0;
            }
        }
        ans = max(ans, len);

        return ans;
    }

    // Method 2: Dynamic Programming
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    int longestValidParentheses(string s) {
        int n = s.size();
        if (n < 2) return 0;

        vector<int> dp(n, 0);
        int ans = 0;
        for (int i = 1; i < n; ++i) {
            if (s[i] == ')') {
                if (s[i - 1] == '(') {
                    dp[i] = (i >= 2 ? dp[i - 2] : 0) + 2;
                } else if (i - dp[i - 1] >= 1 && s[i - dp[i - 1] - 1] == '(') {
                    dp[i] = dp[i - 1] + (i - dp[i - 1] >= 2 ? dp[i - dp[i - 1] - 2] : 0) + 2;
                }
            }
            ans = max(ans, dp[i]);
        }

        return ans;
    }
};