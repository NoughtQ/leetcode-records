// link: https://leetcode.cn/problems/longest-increasing-subsequence

class Solution {
public:
    // Method 1: Dynamic Programming
    // Time Complexity: O(n^2)
    // Space Complexity: O(n)
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        if (!n) return 0;

        vector<int> f(n, 1);
        int ans = 1;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[j] < nums[i]) {
                    f[i] = max(f[i], f[j] + 1);
                }
            }
            ans = max(ans, f[i]);
        }

        return ans;
    }

    // Method 2: Greedy + Binary Search
    // Time Complexity: O(nlogn)
    // Space Complexity: O(n)
    int lengthOfLIS(vector<int>& nums) {
        vector<int> g;

        for (int num : nums) {
            auto it = ranges::lower_bound(g, num);
            if (it == g.end()) {
                g.push_back(num);
            } else {
                *it = num;
            }
        }

        return g.size();
    }
};