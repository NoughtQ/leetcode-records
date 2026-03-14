class Solution {
public:
    // My Solution
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int removeDuplicates(vector<int>& nums) {
        int s = 1, n = nums.size();
        int duplicate = nums[0], cnt = 1;
        for (int f = 1; f < n; ++f) {
            if (nums[f] == duplicate) {
                ++cnt;
                if (cnt < 3) nums[s++] = nums[f];
            } else {
                nums[s++] = nums[f];
                duplicate = nums[f];
                cnt = 1;
            }
        }
        return s;
    }
};