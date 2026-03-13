// link: https://leetcode.cn/problems/subarray-sum-equals-k

class Solution {
public:
    // Correct Solution: Prefix Sum
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int pre = 0;
        unordered_map<int, int> ht;  // store all prefix sums
        int ans = 0;

        ht[0] = 1;
        for (int i = 0; i < n; ++i) {
            pre += nums[i];
            if (ht.contains(pre - k))
                ans += ht[pre - k];
            ++ht[pre];
        }

        return ans;
    }
};