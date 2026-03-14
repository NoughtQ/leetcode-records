class Solution {
public:
    // My Solution
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int removeDuplicates(vector<int>& nums) {
        int cnt = 0, n = nums.size();
        for (int i = 1; i < n; ++i) {
            if (nums[i] == nums[i - 1]) ++cnt;
            nums[i - cnt] = nums[i];
        }
        return n - cnt;
    }

    // Official Solution (Double Pointer)
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int removeDuplicates(vector<int>& nums) {
        int s = 1, n = nums.size();
        for (int f = 1; f < n; ++f) {
            if (nums[f] != nums[f - 1]) {
                nums[s++] = nums[f];
            }
        }
        return s;
    }
};