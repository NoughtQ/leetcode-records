// link: https://leetcode.cn/problems/search-insert-position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        int mid;

        while (l <= r) {
            mid = (l + r) / 2;
            // more robust operation: mid = l + (r - l) / 2; (avoiding overflow)
            if (target == nums[mid])
                return mid;
            else if (target > nums[mid])
                ++l;
            else
                --r;
        }
        return l;
    }
};