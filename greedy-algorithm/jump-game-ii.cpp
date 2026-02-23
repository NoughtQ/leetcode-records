// link: https://leetcode.cn/problems/jump-game-ii/

class Solution {
public:
    // Method 1: Use a table to count minimum number of jumps for each position
    // Time Complexity: O(n^2)
    // Space Complexity: O(n)
    int jump(vector<int>& nums) {
        int n = nums.size();

        vector<int> cnts(n, 0);
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n && j <= i + nums[i]; ++j) {
                if (!cnts[j]) {
                    cnts[j] = cnts[i] + 1;
                } else {
                    cnts[j] = min(cnts[j], cnts[i] + 1);
                }
                if (j == n - 1) return cnts[j];
            }
        }

        return 0;
    }

    // Method 2: Look Up the Starting Position Backward (Greedy)
    // Time Complexity: O(n^2)
    // Space Complexity: O(1)
    int jump(vector<int>& nums) {
        int pos = nums.size() - 1;
        int step = 0;

        while (pos > 0) {
            for (int i = 0; i < pos; ++i) {
                if (i + nums[i] >= pos) {
                    pos = i;
                    ++step;
                    break;
                }
            }
        }

        return step;
    }

    // Method 3: Search the Maximum Reachable Position Forward (Greedy)
    // Time Complexity: O(n)
    // Space Complexity: O(1)
    int jump(vector<int>& nums) {
        int n = nums.size();
        int step = 0, end = 0, rightmost = 0;

        for (int i = 0; i < n - 1; ++i) {
            rightmost = max(rightmost, i + nums[i]);
            if (i == end) {
                end = rightmost;
                ++step;
            }
        }

        return step;
    }
};