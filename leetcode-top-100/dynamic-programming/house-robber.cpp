// link: https://leetcode.cn/problems/house-robber

class Solution {
public:
    // Method: Dynamic Programming
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int> f(n, 0);
        int ans = -1;

        for (int i = 0; i < n; ++i) {
            if (i == 0) {
                f[i] = nums[i];
            } else if (i == 1) {
                f[i] = max(nums[i], nums[i - 1]);
            } else {
                f[i] = max(nums[i] + f[i - 2], f[i - 1]);
            }
            ans = max(ans, f[i]);
        }

        return ans;
    }

    // Technique: Rolling Array
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int rob(vector<int>& nums) {
        int n = nums.size();
        // vector<int> f(n, 0);
        int p_first, p_second, cur;
        int ans = -1;

        for (int i = 0; i < n; ++i) {
            if (i == 0) {
                cur = nums[i];
            } else if (i == 1) {
                cur = max(nums[i], nums[i - 1]);
            } else {
                cur = max(nums[i] + p_second, p_first);
            }
            ans = max(ans, cur);
            p_second = p_first;
            p_first = cur;
        }

        return ans;
    }
};