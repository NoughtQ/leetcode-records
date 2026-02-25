// link: https://leetcode.cn/problems/maximum-product-subarray

class Solution {
public:
    // Method: Dynamic Programming
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        vector<int> minF(nums.begin(), nums.end());
        vector<int> maxF(nums.begin(), nums.end());
        int ans = nums[0];

        for (int i = 1; i < n; ++i) {
            minF[i] = min({minF[i], minF[i - 1] * nums[i], maxF[i - 1] * nums[i]});
            maxF[i] = max({maxF[i], minF[i - 1] * nums[i], maxF[i - 1] * nums[i]});
            ans = max(ans, maxF[i]);
        }

        return ans;
    }

    // Rolling Array
    // Space Complexity: O(1)
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0;

        int minF, maxF, lastMinF = nums[0], lastMaxF = nums[0];
        int ans = nums[0];

        for (int i = 1; i < n; ++i) {
            minF = min({nums[i], lastMinF * nums[i], lastMaxF * nums[i]});
            maxF = max({nums[i], lastMinF * nums[i], lastMaxF * nums[i]});
            ans = max(ans, maxF);
            lastMinF = minF;
            lastMaxF = maxF;
        }

        return ans;
    }
};