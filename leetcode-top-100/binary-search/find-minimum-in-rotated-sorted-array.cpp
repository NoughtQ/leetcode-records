// link: https://leetcode.cn/problems/find-minimum-in-rotated-sorted-array

class Solution {
public:
    // Method: Binary Search
    // Time Complexity: O(log n)
    // Space Complexity: O(1) (no extra space used)
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n - 1, mid;
        
        while (l < r) {
            mid = l + (r - l) / 2;
            if (nums[mid] < nums[r]) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }

        return nums[l];
    }
};