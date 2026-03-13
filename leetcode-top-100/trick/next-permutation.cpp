// link: https://leetcode.cn/problems/next-permutation

class Solution {
public:
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 1, j = n - 1;

        while (i > 0 && nums[i] <= nums[i - 1]) {
            --i;
        }
        if (i > 0) {
            while (j >= i && nums[j] <= nums[i - 1]) {
                --j;
            }
            swap(nums[j], nums[i - 1]);
        }
        reverse(nums.begin() + i, nums.end());
    }
};