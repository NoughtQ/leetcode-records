// link: https://leetcode.cn/problems/best-time-to-buy-and-sell-stock-ii

class Solution {
public:
    // My Solution: Dynamic Programming
    // Time Complexity: O(n^2)
    // Space Complexity: O(n)
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> dp(n, 0);

        for (int i = 1; i < n; ++i) {
            for (int j = i - 1; j >= 0; --j) {
                dp[i] = max(dp[i], dp[j] + max(0, prices[i] - prices[j]));
            }
        }

        return dp[n - 1];
    }

    // Best Solution: Greedy
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0;

        for (int i = 1; i < n; ++i) {
            ans += max(0, prices[i] - prices[i - 1]);
        }

        return ans;
    }
};