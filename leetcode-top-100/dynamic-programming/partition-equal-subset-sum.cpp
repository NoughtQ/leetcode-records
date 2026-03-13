// link: https://leetcode.cn/problems/partition-equal-subset-sum

class Solution {
public:
    // Method: Dynamic Programming
    // Time Complexity: O(n * target)
    // Space Complexity: O(target)
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return false;

        int target = 0;
        int max_num = INT_MIN;
        for (int num : nums) {
            target += num;
            max_num = max(max_num, num);
        }
        if (target % 2 == 1) return false;
        target /= 2;
        if (max_num > target) return false;

        // Space Complexity: O(n * target)
        // vector<vector<bool>> dp(n, vector<bool>(target + 1));
        // for (int i = 0; i < n; ++i) dp[i][0] = true;
        // dp[0][nums[0]] = true;
        
        // for (int i = 1; i < n; ++i) {
        //     for (int j = 1; j <= target; ++j) {
        //         if (j >= nums[i]) {
        //             dp[i][j] = dp[i - 1][j - nums[i]] || dp[i - 1][j];
        //         } else {
        //             dp[i][j] = dp[i - 1][j];
        //         }
        //     }
        // }
        
        // return dp[n - 1][target];

        vector<int> dp(target + 1);
        dp[0] = 1;
        
        for (int i = 1; i < n; ++i) {
            for (int j = target; j >= nums[i]; --j) {
                dp[j] |= dp[j - nums[i]];
            }
        }
        
        return dp[target];
    }
};