// link: https://leetcode.cn/problems/maximum-subarray

class Solution {
public:
    // Method 1: Prefix Sum (Failure)
    // (Failed to pass tests with large-scale data)
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ps(n + 1);
        int ans = -10001;

        ps[0] = 0;
        for (int i = 1; i <= n; ++i) {
            ps[i] = ps[i - 1] + nums[i - 1];
        }

        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j <= n; ++j) {
                ans = max(ans, ps[j] - ps[i]);
            }
        }

        return ans;
    }

    // Method 2: Divide-and-Conquer
    // Time Complexity: O(nlogn)
    // Space Complexity: O(n)
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int c = n / 2;
        int lm, rm, mm;
        int ml, mr, sl = 0, sr = 0;
        
        if (n == 1)
            return nums[0];
        
        vector<int> l_nums(nums.begin(), nums.begin() + c);
        vector<int> r_nums(nums.begin() + c, nums.end());

        lm = maxSubArray(l_nums);
        rm = maxSubArray(r_nums);
        mm = nums[c];
        ml = 0;
        mr = 0;

        for (int i = c - 1; i >= 0; --i) {
            sl += nums[i];
            ml = max(ml, sl);
        }

        for (int i = c + 1; i < n; ++i) {
            sr += nums[i];
            mr = max(mr, sr);
        }

        return max({lm, rm, mm + ml + mr});
    }

    // Method 3: Dynamic Programming
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int pre = -10001;
        int ans = -10001;

        for (int num : nums) {
            pre = max(pre + num, num);
            ans = max(ans, pre);
        }
        
        return ans;
    }

    // Method 4: Prefix Sum (success!)
    // Record the current prefix sum and the minimum prefix sum so far; 
    // the current maximum contiguous subsequence is the difference between them
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int pre = 0, min_pre = 0;
        int ans = nums[0];

        for (int num : nums) {
            pre += num;
            ans = max(ans, pre - min_pre);
            min_pre = min(min_pre, pre);
        }
        
        return ans;
    }
};