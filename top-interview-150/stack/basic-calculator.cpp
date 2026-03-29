// link: https://leetcode.cn/problems/basic-calculator

class Solution {
public:
    // My Solution:
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    int calculate(string s) {
        stack<int> ops;
        ops.push(1);
        int sign = 1, i = 0, n = s.size();
        long long ans = 0;

        while (i < n) {
            switch (s[i]) {
                case ' ':
                    ++i;
                    break;
                case '+':
                    sign = ops.top();
                    ++i;
                    break;
                case '-':
                    sign = -ops.top();
                    ++i;
                    break;
                case '(':
                    ops.push(sign);
                    ++i;
                    break;
                case ')':
                    ops.pop();
                    ++i;
                    break;
                default:
                    long long num = 0;
                    while (i < n && isdigit(s[i])) {
                        num = num * 10 + s[i++] - '0';
                    }
                    ans += num * sign;
            }
        }

        return ans;
    }
};