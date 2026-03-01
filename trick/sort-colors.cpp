// link: https://leetcode.cn/problems/sort-colors

class Solution {
public:
    // Method 1: Counting
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    void sortColors(vector<int>& nums) {
        vector<int> cnts(3, 0);
        int n = nums.size();
        
        for (int num : nums) {
            ++cnts[num];
        }
        for (int i = 0; i < n; ++i) {
            if (i < cnts[0])
                nums[i] = 0;
            else if (i < cnts[0] + cnts[1])
                nums[i] = 1;
            else
                nums[i] = 2;
        }
    }

    // Method 2: Single Pointer
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int head = 0;

        for (int i = head; i < n; ++i) {
            if (!nums[i]) {
                swap(nums[head++], nums[i]);
            }
        }
        for (int i = head; i < n; ++i) {
            if (nums[i] == 1) {
                swap(nums[head++], nums[i]);
            }
        }
    }

    // Method 3: Double Pointers
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int p0 = 0, p2 = n - 1;

        for (int i = 0; i <= p2; ++i) {
            while (i <= p2 && nums[i] == 2) {
                swap(nums[p2--], nums[i]);
            }
            if (!nums[i]) {
                swap(nums[p0++], nums[i]);
            }
        }
    }
};