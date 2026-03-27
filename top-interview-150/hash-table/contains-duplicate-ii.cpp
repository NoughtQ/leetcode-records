// link: https://leetcode.cn/problems/contains-duplicate-ii

class Solution {
public:
    // My Solution:
    // Time Complexity: O(n)
    // Space Complexity: O(n)
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> ht;
        int n = nums.size();

        for (int i = 0; i < n; ++i) {
            if (ht.contains(nums[i]) && abs(ht[nums[i]] - i) <= k) {
                return true;
            }
            ht[nums[i]] = i;
        }

        return false;
    }
};