// link: https://leetcode.cn/problems/minimum-size-subarray-sum

class Solution {
public:
    // Method 1: Brute Force
    // Time Complexity: O(n^2)
    // Space Complexity: O(1)
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum, ans = INT_MAX;

        for (int i = 0; i < n; ++i) {
            sum = 0;
            for (int j = i; j < n; ++j) {
                sum += nums[j];
                if (sum >= target) {
                    ans = min(ans, j - i + 1);
                }
            }
        }

        return ans == INT_MAX ? 0 : ans;
    }

    // Method 2: Prefix Sum + Binary Search
    // Time Complexity: O(nlogn)
    // Space Complexity: O(n)
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        vector<int> prefix(n + 1, 0);

        for (int i = 1; i <= n; ++i) {
            prefix[i] = prefix[i - 1] + nums[i - 1];
        }

        for (int i = 1; i <= n; ++i) {
            int new_target = target + prefix[i - 1];
            auto bound = lower_bound(prefix.begin(), prefix.end(), new_target);
            if (bound != prefix.end()) {
                ans = min(ans, static_cast<int>(bound - prefix.begin()) - i + 1);
            }
        }

        return ans == INT_MAX ? 0 : ans;
    }

    // Method 3: Sliding Window
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX, sum = 0, l = 0, r = 0;

        while (r < n) {
            sum += nums[r];
            while (sum >= target) {
                ans = min(ans, r - l + 1);
                sum -= nums[l];
                ++l;
            }
            ++r;
        }

        return ans == INT_MAX ? 0 : ans;
    }
};