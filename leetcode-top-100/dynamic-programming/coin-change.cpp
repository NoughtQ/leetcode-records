// link: https://leetcode.cn/problems/coin-change

class Solution {
public:
    // Method: Dynamic Programming
    // Time Complexity: O(nm)
    // Space Complexity: O(n)
    int coinChange(vector<int>& coins, int amount) {
        vector<int> f(amount + 1);

        for (int i = 1; i <= amount; ++i) {
            f[i] = INT_MAX;
            for (int c : coins) {
                if (i - c >= 0 && f[i - c] != -1) {
                    f[i] = min(f[i], f[i - c] + 1);
                }
            }
            if (f[i] == INT_MAX) f[i] = -1;
        }

        return f[amount];
    }
};