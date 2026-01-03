// link: https://leetcode.cn/problems/move-zeroes/

class Solution {
public:
    // My Solution
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int cnt = 0;

        // When encountering a non-zero element, you can boldly move it to the front; 
        // this will not overwrite the non-zero elements in front of it.
        for (int i = 0; i < len; ++i) {
            if (nums[i] != 0) {
                nums[cnt++] = nums[i];
            }
        }

        // overwrite original elements with zeros after non-zero elements
        for (int i = cnt; i < len; ++i) {
            nums[i] = 0;
        }
    }

    // Double-pointer Version (Official Solution)
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        // lp points to (lp)th non-zero element
        // rp points the currently scanned element
        int lp = 0, rp = 0;
        while (rp < len) {
            if (nums[rp]) {
                // swap() function is from algorithm or utility library
                swap(nums[lp], nums[rp]);
                ++lp;
            }
            ++rp;
        }
    }
};