// link: https://leetcode.cn/problems/unique-paths

class Solution {
public:
    // Method 1: Dynamic Programming
    // Time Complexity: O(m * n)
    // Space Complexity: O(m * n)
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m, vector<int>(n, 1));

        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }

        return dp[m - 1][n - 1];
    }

    // Space Complexity: O(n)
    int uniquePaths(int m, int n) {
        vector<int> dp(n, 1);

        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                dp[j] += dp[j - 1];
            }
        }

        return dp[n - 1];
    }

    // Method 2: Combination
    // Time Complexity: O(m)
    // Space Complexity: O(1)
    int uniquePaths(int m, int n) {
        long long ans = 1;

        for (int x = n, y = 1; y < m; ++x, ++y) {
            ans = ans * x / y;
        }

        return ans;
    }
};