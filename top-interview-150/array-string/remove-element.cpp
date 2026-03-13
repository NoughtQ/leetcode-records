class Solution {
public:
    // My Solution
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int removeElement(vector<int>& nums, int val) {
        int cnt = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == val) {
                ++cnt;
            } else {
                nums[i - cnt] = nums[i];
            }
        }

        return nums.size() - cnt;
    }

    // Official Solution (double pointer)
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int removeElement(vector<int>& nums, int val) {
        int l = 0, r = nums.size() - 1;

        while (l <= r) {
            if (nums[l] == val) {
                swap(nums[l], nums[r]);
                --r;
            } else {
                ++l;
            }
        }

        return l;
    }
};