// link: https://leetcode.cn/problems/perfect-squares

class Solution {
public:
    // Method: Dynamic Programming
    // Time Complexity: O(n^(3/2))
    // Space Complexity: O(n)
    int numSquares(int n) {
        vector<int> f(n + 1, 0);

        for (int i = 1; i <= n; ++i) {
            f[i] = i;
            for (int j = 1; i - j * j >= 0; ++j) {
                f[i] = min(f[i], f[i - j * j] + 1);
            }
        }

        return f[n];
    }
};