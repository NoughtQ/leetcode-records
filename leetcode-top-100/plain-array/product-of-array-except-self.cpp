// link: https://leetcode.cn/problems/product-of-array-except-self

class Solution {
public:
    // Method 1: Predix + Suffix Sum
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        vector<int> p(n, nums.front()), s(n, nums.back());

        for (int i = 1; i < n; ++i) {
            p[i] = p[i - 1] * nums[i];
        }

        for (int i = n - 2; i >= 0; --i) {
            s[i] = s[i + 1] * nums[i];
        }

        for (int i = 0; i < n; ++i) {
            if (i == 0)
                ans[i] = s[i + 1];
            else if (i == n - 1)
                ans[i] = p[i - 1];
            else
                ans[i] = p[i - 1] * s[i + 1];
        }

        return ans;
    }

    // Method 2: Reuse memory based on Method 1
    // In the preprocessing stage, ans can be used to store suffix sums
    // Time Complexity: O(n)
    // Space Complexity: O(1) (ignore vector<int> ans(n))
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int pre = 1;

        ans.back() = nums.back();
        for (int i = n - 2; i >= 0; --i) {
            ans[i] = ans[i + 1] * nums[i];
        }

        for (int i = 0; i < n; ++i) {
            if (i == n - 1)
                ans[i] = pre;
            else
                ans[i] = pre * ans[i + 1];
            pre *= nums[i];
        }

        return ans;
    }
};