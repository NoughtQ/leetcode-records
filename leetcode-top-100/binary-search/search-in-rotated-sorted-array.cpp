// link: https://leetcode.cn/problems/search-in-rotated-sorted-array

class Solution {
public:
    // Method: Binary Search
    // Time Complexity: O(log n)
    // Space Complexity: O(1) (no extra space used)
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, mid;

        while (l <= r) {
            // cout << l << ", " << r << endl;
            mid = l + (r - l) / 2;
            if (target == nums[mid]) {
                return mid;
            }
            if (nums[0] <= nums[mid]) {
                if (nums[0] <= target && target <= nums[mid]) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            } else {
                if (nums[mid] <= target && target <= nums.back()) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }

        return -1;
    }
};