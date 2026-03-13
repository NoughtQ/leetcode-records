// link: https://leetcode.cn/problems/find-the-duplicate-number

class Solution {
public:
    // Method 1: Binary Search
    // Time Complexity: O(nlogn)
    // Space Complexity: O(1)
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n - 1, mid;
        int cnt;
        int ans = -1;

        while (l <= r) {
            cnt = 0;
            mid = l + ((r - l) >> 1);
            for (int num : nums) {
                cnt += num <= mid;
            }
            if (cnt <= mid) {
                l = mid + 1;
            } else {
                r = mid - 1;
                ans = mid;
            }
        }

        return ans;
    }

    // Method 2: Binary Representation
    // Time Complexity: O(nlogn)
    // Space Complexity: O(1)
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int max_bit = 31;
        int ans = 0;

        while (!((n - 1) >> max_bit)) max_bit--;
        for (int i = 0; i <= max_bit; ++i) {
            int x = 0, y = 0;
            for (int j = 0; j < n; ++j) {
                if (nums[j] & (1 << i)) {
                    ++x;
                }
                if (j > 0 && (j & (1 << i))) {
                    ++y;
                }
            }
            if (x > y) {
                ans |= 1 << i;
            }
        }

        return ans;
    }

    // Method 3: Fast-Slow Pointers (Circular Linked List)
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int s = 0, f = 0;

        do {
            s = nums[s];
            f = nums[nums[f]];
        } while (s != f);
        s = 0;
        while (s != f) {
            s = nums[s];
            f = nums[f];
        }

        return s;
    }
};