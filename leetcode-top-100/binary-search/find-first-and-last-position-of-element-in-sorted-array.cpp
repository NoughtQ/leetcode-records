// link: https://leetcode.cn/problems/find-first-and-last-position-of-element-in-sorted-array

class Solution {
public:
    // Method: Binary Search
    // Time Complexity: O(log n)
    // Space Complexity: O(1) (no extra space used)
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, mid;
        vector<int> ans = {-1, -1};

        while (l <= r) {
            mid = l + (r - l) / 2;
            if (target <= nums[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        if (l < nums.size() && target == nums[l]) {
            ans[0] = l;
            while (++l < nums.size() && target == nums[l]);
            ans[1] = l - 1;
        }

        return ans;
    }
};