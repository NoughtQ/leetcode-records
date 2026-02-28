// link: https://leetcode.cn/problems/longest-common-subsequence

class Solution {
public:
    // Method: Dynamic Programming
    // Time Complexity: O(n1 * n2)
    // Space Complexity: O(n1 * n2)
    int longestCommonSubsequence(string text1, string text2) {
        int n1 = text1.size(), n2 = text2.size();
        vector<vector<int>> dp(n1, vector<int>(n2, 0));

        dp[0][0] = static_cast<int>(text1[0] == text2[0]);
        for (int i = 1; i < n1; ++i) {
            if (dp[i - 1][0] == 1 || text1[i] == text2[0]) {
                dp[i][0] = 1;
            }
        }
        for (int j = 1; j < n2; ++j) {
            if (dp[0][j - 1] == 1 || text2[j] == text1[0]) {
                dp[0][j] = 1;
            }
        }
        for (int i = 1; i < n1; ++i) {
            for (int j = 1; j < n2; ++j) {
                if (text1[i] == text2[j]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[n1 - 1][n2 - 1];
    }
};