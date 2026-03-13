// link: https://leetcode.cn/problems/rotate-array

class Solution {
public:
    // Method 1
    // Time Complexity: O(N)
    // Space Complexity: O(N)
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> tmp(n);

        for (int i = 0; i < n; ++i) {
            tmp[(i + k) % n] = nums[i]; 
        }
        for (int i = 0; i < n; ++i) {
            nums[i] = tmp[i];
        }
    }

    // Method 2
    // Time Complexity: O(N)
    // Space Complexity: O(K)
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        vector<int> tmp(k);

        for (int i = n - k; i < n; ++i) {
            tmp[i - n + k] = nums[i]; 
        }
        for (int i = n - k - 1; i >= 0; --i) {
            nums[i + k] = nums[i];
        }
        for (int i = 0; i < k; ++i) {
            nums[i] = tmp[i];
        }
    }

    // Method 3: Cyclic Substitution
    // Time Complexity: O(N)
    // Space Complexity: O(1)
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        k %= n;
        if (k == 0) return;

        int idx = 0, pre = nums[0], cur = 0;
        long long lcm_nk = lcm(n, k);

        for (int i = 1; i <= n; ++i) {
            idx = (idx + k) % n;
            cur = nums[idx];
            nums[idx] = pre;
            pre = cur;
            if ((static_cast<long long>(i) * static_cast<long long>(k)) % lcm_nk == 0) {
                pre = nums[++idx];
            }
        }
    }

    // Method 4: Reversion (from Official Solution)
    // Time Complexity: O(N)
    // Space Complexity: O(1)
    // reverse() is a function from <algorithm> header file
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        k %= n;
        if (k == 0) return;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};